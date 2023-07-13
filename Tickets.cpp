#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int age = 0;
    float ticketPrice = 0.0;

    cout << "how old are you?";
    cin >> age ;

    cout << "debug: age = " << age << endl;

    if (age < 0) {
        cout << "invalid input" << endl;
    }
    if (age >= 10 ) {
        ticketPrice = 109;
    }
    else if (age >= 3) {
        ticketPrice = 109 * 0.9;
    }
    else if (age >= 0) {
        ticketPrice = 0.00;
    }

    cout << "Your ticket price is " << fixed << setprecision(2) << ticketPrice << endl;

    return (0);

}