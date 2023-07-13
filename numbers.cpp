#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, num3;
    int least, middle, largest;
    cout << "First number";
    cin >> num1;

    cout << "Second number";
    cin >> num2;

    cout << "Third number";
    cin >> num3;

    if (num1 <= num2 && num1 <= num3)
        if (num2 <= num3){
            // num1, num2, num3
            least = num1;
            middle = num2;
            largest = num3;
        } else {
            // num1, num3, num2;
            least = num1;
            middle = num3;
            largest = num2;
        }
        if (num2 <= num1 && num2 <= num3)
            if (num1 <= num3) {
            // num2, num1, num3;
            least = num2;
            middle = num1;
            largest = num3;
            } else {
                // num2, num3, num1
                least = num2;
                middle = num3;
                largest = num1;
            }
                //num3 is least
                if (num1 <= num2){
                // num3, num 1, num2
                least = num3;
                middle = num1;
                largest = num2;
                } else {
                    // num3, num2, num1
                    least = num3;
                    middle = num2;
                    largest = num1;
                }

     cout << least << ":" << middle << ":" << largest << endl;
     return (0);
     //PS C:\COSC assignments> ./numbers
    //First number20
    //Second number25
    //Third number15
    //15:20:25
}

    // if (num1 <= num2 && num1 <= num3) {
    // if (num2 <= num3)
    //  num1, num2, num3
    // least = num1
    // middle = num2
    // largest = num3
    //  else num1, num3, num2
    // least = num1
    // middle = num3
    // largest = num2
    //}
    // if (num2 <= num1 && num2 <= num3) {
    // if (num1 <= num3)
    //  num2, num1, num3
    // least = num2
    // middle = num1
    // largest = num3
    //  else num2, num3, num1
    // least = num2
    // middle = num3
    // largest = num1
    //}
    // else {
    // num3 is least
    // if (num1 <= num2)
    // num3, num 1, num2
    // least = num3
    // middle = num1
    // largest = num2
    // else num3, num2, num1
    // least = num3
    // middle = num2
    // largest = num1
    //}
    