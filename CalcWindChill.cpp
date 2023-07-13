// Author Philip Wells
// Lab 03
// Program to calculate Wind Chill

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // vairables
    double w;
    double t;
    double v;
    double x;

    cout << "This is a program to calculate Wind Chill factor, w, with input Temperature, t, in Farenheit and Wind Velocity, v, in MPH. " << endl;

    cout << "Please enter the Temperature" << endl;
    cin >> t;
    cout << "Please enter the Wind Velocity" << endl;
    cin >> v;

    // output
    x = pow(v, 0.16);
    w = 35.74 + (0.6125 * t) - (35.75 * x) + (0.4275 * t * x);

    // output result
    cout << "The wind chill is " << w << " degrees" << endl;
    return (0);
}

// This is a program to calculate Wind Chill factor, w, with input Temperature, t, in Farenheit and Wind Velocity, v, in MPH.
// Please enter the Temperature
// 56
// Please enter the Wind Velocity
// 10
// The wind chill is 52.9694 degrees Farenheit