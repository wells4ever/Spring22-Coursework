#include <iostream>
using namespace std;

int abs(int number)

{
    if (number < 0)
        number = -number;
    return number;
}

double larger(double x, double y)
{
    double max;
    if (x <= y)
    {
        max = x;
    }
    else
    {
        max = y;
    }

    return max;
}
double compareThree(double x, double y, double z)
{
    return larger(x, larger(y, z));
}

int main()
{
    double input0, input1;

    while (true)
    {
        cout << " Input 2 doubles : ";
        cin >> input0 >> input1;
    }
    return (0);
}
