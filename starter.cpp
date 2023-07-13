// program
// author
// notes

#include <iostream>

using namespace std;

int main()
{
    // variable declarations
    double length;
    double width;
    double area;
    double perimeter;

    cout << "Program to compute and output the perimeter and" << endl;
    cout << "area of a rectangle" << endl;

    // assignments
    length = 6.5;
    width = 4.25;
    // computations
    perimeter = 2 * (length + width);
    area = length * width;

    // output results
    cout << "length = " << length << endl;
    cout << "width =" << width << endl;
    cout << "perimeter =" << perimeter << endl;
    cout << "area =" << area << endl;
    return (0);
}