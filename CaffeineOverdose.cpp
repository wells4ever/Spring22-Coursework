// Author:  Philip Wells
// Lab:     Lab 02
// Notes:   Create program to calculate variable calculations

#include <iostream>

using namespace std;

int main()
{
    // variable declarations
    double drink;
    double Death;
    double drinks;
    // "Cup" refers caffeine in a 16-ounce cup of coffee, while "Can" refers to a 12-ounce can of cola and "Death" refers to the amount required to overdose
    //  "cans" and "cups" refers to the number of cans of cola or cups of coffee required to overdose
    cout << "This is a program to compute the required number of drinks with input caffeine quantity to kill a person via caffeine overdose" << endl;

    // variable assignments
    cout << "Please enter the amount of caffeine in your drink." << endl;
    cin >> drink;
    Death = 10000;

    // computations
    drinks = Death / drink;

    // Output
    cout << "Number of drinks to kill a person when consumed at once =" << drinks << endl;
    return (0);
}
// This is a program to compute the required number of drinks with input caffeine quantity to kill a person via caffeine overdose
// Please enter the amount of caffeine in your drink.
// 200
// Number of drinks to kill a person when consumed at once =50
