// Author Philip Wells
// Lab 03
// Program to calculate basic math

#include <iostream>

using namespace std;

int main()
{
    // Variables
    double A;
    double B;
    double addition;
    double subtraction;
    double multiplication;
    double division;

    cout << "This is a program to compute addition, substraction, multiplication, and division of two integers" << endl;

    // Variable definitions
    A = 25;
    B = 5;

    // Computations
    addition = A + B;
    subtraction = A - B;
    multiplication = A * B;
    division = A / B;

    // output
    cout << "A + B =" << addition << endl;
    cout << "A - B =" << subtraction << endl;
    cout << "A * B =" << multiplication << endl;
    cout << "A / B =" << division << endl;
    return (0);
}