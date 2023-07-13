#include <iostream>

using namespace std;

const int NUMBER_OF_BUCKETS = 8;

int main()
{
    int testScores[] = {76, 89, 150, 135, 200, 76, 12, 100, 150, 28, 178, 189, 167, 200, 175, 150, 87, 99, 129, 149, 176, 200, 87, 35, 157, 189};
     int control[NUMBER_OF_BUCKETS][3] = {
        {0, 24,0},
        {25, 49,0},
        {50, 74,0},
        {75, 99,0},
        {100, 124,0},
        {125,149,0},
        {150, 174,0},
        {175, 200,0},
        };
    for (int testScore : testScores)
    {
     
      for ( int i = 0; i < NUMBER_OF_BUCKETS; i++) {
            if (testScore >= control[i][0] && testScore <= control[i][1]) {
            control[i][2]++;
            break;
        }}}

                   for ( auto row : control) {
                       cout << row[0] << " - " << row[1] << ": " << row[2] << endl; 
        }
      
    return (0);
}
