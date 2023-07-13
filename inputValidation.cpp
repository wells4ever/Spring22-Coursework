#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    cout << "Please enter an odd number between 0 and 100. ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "That is an even number. Please try again. ";
    }
     else if (n < 0 || n > 100) {
        cout << "That is outside the specified range. Please try again. ";
    } 
    else if (n % 2 != 0 && n > 0 && n <= 100) {
        cout << "Congratulations, that is an odd number and within the specified range.";
    }
}


//PS C:\COSC assignments> ./input
//Please enter an odd number between 0 and 100. 101
//That is outside the specified range. Please try again.
//PS C:\COSC assignments> ./input
//Please enter an odd number between 0 and 100. 55
//Congratulations, that is an odd number and within the specified range.
//PS C:\COSC assignments> ./input
//Please enter an odd number between 0 and 100. 54
//That is an even number. Please try again.
//PS C:\COSC assignments> ./input
//Please enter an odd number between 0 and 100. -1
//That is outside the specified range. Please try again. 