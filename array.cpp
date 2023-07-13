#include <iostream>

using namespace std;

const int ARRAY_LENGTH = 10;

int main()
{
    int numbers[ARRAY_LENGTH] = {5, 3, 10, 9, 7, 2, 4, 6, 12, 4};
                    // int smallestIndex = 0;
                    // int smallestNumber;
    int index;
    int searchItem;
                                                                                // bool foundFlag = false;
    int foundIndex = -1;
    cout << "Search for : ";
    cin >> searchItem;
    for (index = 0; index < ARRAY_LENGTH; index++)
    {
     if (numbers[index] == searchItem) {
         foundIndex = index;
         break;
     }
    }
    if (foundIndex > 0){
        cout << "found it at index : "<< foundIndex << endl;
    } else {
        cout << "This number is not in the array" << endl;
    }
                                                                                // if (foundFlag == true) {
                                                                                //     cout << "found it at " << endl;
                                                                                // } else {
                                                                                //     cout << "This is not in the array" << endl;
                                                                                // {
                    //     cout << numbers[index] << endl;
                    //     if (numbers[smallestIndex] > numbers[index])
                    //         smallestIndex = index;
                    //     smallestNumber = numbers[smallestIndex];
                    // }
                    // cout << "Smallest Value is : " << smallestNumber << endl;
    return (0);
}
