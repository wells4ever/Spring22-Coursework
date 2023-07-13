// Philip Wells
// Lab 04
// Program to calculate cost per square inch of house

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // variables
    float cost;
    float area;
    float costper;

    cout << "This program will compute cost per square feet of house with input values for cost and area." << endl;

    // Variable definitions
    cout << "Please enter the area of the house in square feet." << endl;
    cin >> area;
    cout << "Please enter the cost of the house." << endl;
    cin >> cost;

    // computations
    costper = cost / area;

    // output
    cout << "The cost per square foot is $" << costper << endl;
    return (0);
}

// This program will compute cost per square feet of house with input values for cost and area.
// Please enter the area of the house in square feet.
// 1029
// Please enter the cost of the house.
// 100000
// The cost per square foot is $97.1817