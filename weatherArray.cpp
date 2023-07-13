#include <iostream>

using namespace std;

const int ARRAY_LENGTH = 10;

int main()
{
    // temperatures in degrees Farenheit from 4/8/22 to 4/17/22
    float highs[ARRAY_LENGTH] = {76, 87, 85, 86, 85, 92, 84, 82, 86, 88};
    float lows[ARRAY_LENGTH] = {44, 60, 69, 72, 74, 53, 58, 71, 71, 59};
    float sumHigh = 0.0;
    float sumLow = 0.0;
    float avgHigh;
    float avgLow;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        sumHigh += highs[i];
        sumLow += lows[i];
    }
    avgHigh = sumHigh / ARRAY_LENGTH;
    avgLow = sumLow / ARRAY_LENGTH;
    cout << "The average High and Low for the last 10 days in College Station is : " << avgHigh << " degrees Farenheit and " <<avgLow<< " degrees Farenheit";
    return (0);
}
// PS C:\COSC assignments> ./weatherarray
// The average High and Low for the last 10 days in College Station is : 85.1 degrees Farenheit and 63.1 degrees Farenheit