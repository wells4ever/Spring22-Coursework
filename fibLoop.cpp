#include <iostream>

using namespace std;

int main()
{
    int number0 = 0;
    int number1 = 1;
    int number2 = 0;
    // for (int i = 0l; i < 45; i++) {
    // while (number1 + number0 < 100000)
    //do
    for (number2 ; number1 + number0 < 100000; number2){
        number2 = number0 + number1;
        cout << number2 << endl;
        number0 = number1;
        number1 = number2;
    } //while (number1 + number0 < 100000);
}