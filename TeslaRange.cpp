// Author:  Philip Wells
// Lab:     Lab 02
// Notes:   Create program to calculate variable calculations
#include <iostream>

using namespace std;

int main()
{
    // variable declarations
    double hwy;
    double city;
    double Highway;
    double City;
    double Range;
    //"hwy" refers to highway EPA dyno test, "city" refers to city EPA dyno test, "Highway" refers to highway range, "City" refers to City range
    //"Range" refers to combined range, or EPA rated range
    // unit of measurement is miles

    cout << "This is a program to calculate the EPA rated range of an electic vehicles with input dyno ratings" << endl;

    // variable definitions
    cout << "Please enter your car's Highway rating" << endl;
    cin >> hwy;
    cout << "Please enter your car's City rating" << endl;
    cin >> city;

    // Computations
    Highway = hwy * 0.7;
    City = city * 0.7;
    Range = (City * 0.55) + (Highway * 0.45);

    // output
    cout << "The Highway range is " << Highway << endl;
    cout << "The City range is " << City << endl;
    cout << "The combined Range is " << Range << endl;
}

// This is a program to calculate the EPA rated range of an electic vehicles with input dyno ratings
// Please enter your car's Highway rating
// 450
// Please enter your car's City rating
// 375
// The Highway range is 315
// The City range is 262.5
// The combined Range is 286.125