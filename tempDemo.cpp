#include <iostream>
using namespace std;

const int NUMBER_OF_ROWS = 12;
const int NUMBER_OF_COLUMNS = 2;
const int highTemp = 1;
const int lowTemp = 0;
// float average(const int temp[][NUMBER_OF_COLUMNS], int numberRows, int colNum)
// {
//     int sum = 0;
//     int count = 0;
//     for (int index = 0; index < numberRows; index++){
//         sum += temp[index][colNum];
//     count++;
//       }  return (count > 0 ? sum/count : -9999);
//     }
float averageHigh(const int temp[][NUMBER_OF_COLUMNS], int numberRows)
{
    int sum = 0;
    int count = 0;
    for (int index = 0; index < numberRows; index++)
    {
        sum += temp[index][1];
        count++;
    }
    return (count > 0 ? sum / count : -9999);
}
float averageLow(const int temp[][NUMBER_OF_COLUMNS], int numberRows)
{
    int sum2 = 0;
    int count2 = 0;
    for (int index = 0; index < numberRows; index++)
    {
        sum2 += temp[index][0];
        count2++;
    }
    return (count2 > 0 ? sum2 / count2 : -9999);
}
int findHighIndex(const int temp[][NUMBER_OF_COLUMNS], int numberRows)
{
    int highIndex = 0;
    for (int index = 0; index < numberRows; index++)
    {
        if (temp[highIndex][1] < temp[index][1])
        {
            highIndex = index;
        }
    }
    return highIndex;
}
int findLowIndex(const int temp[][NUMBER_OF_COLUMNS], int numberRows)
{
    int lowIndex = 0;
    for (int index = 0; index < numberRows; index++)
    {
        if (temp[lowIndex][0] > temp[index][0])
        {
            lowIndex = index;
            
        }
    }
    return lowIndex;
}
int main()
{

    int weatherTemp[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS] = {
        {-6, 25},
        {0, 32},
        {5, 37},
        {8, 40},
        {25, 45},
        {40, 60},
        {45, 65},
        {50, 70},
        {55, 75},
        {60, 85},
        {50, 65},
        {40, 45},
    };
    cout << "average high: " << averageHigh(weatherTemp, NUMBER_OF_ROWS) << endl;
    cout << "average low: " << averageLow(weatherTemp, NUMBER_OF_ROWS) << endl;
    cout << "high index: " << findHighIndex << endl;
    cout << "low index: " << findLowIndex << endl;
    // cout << average(weatherTemp,NUMBER_OF_ROWS, highTemp) << endl;
    // cout << average(weatherTemp, NUMBER_OF_ROWS, lowTemp) << endl;
    return (0);
}

// if (count > 0)
// {
//     return (sum / numberRows);
// }
// else
// {
//     return -9999
// }

// void printMatrix(int matrix[][NUMBER_OF_COLUMN
//                  int NUMBER_OF_ROWS);
