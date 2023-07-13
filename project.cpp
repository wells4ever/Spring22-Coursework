#include <iostream>

using namespace std;

void gcd(int num1, int num2);
int num1, num2;
int GCD;

int main()
{
    cout << "Please input two non-zero integers to compare. ";
    cin >> num1 >> num2;

    gcd(num1, num2);
    cout << " The GCD is equal to: " << GCD << endl;
    return (0);
}
void gcd(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        GCD = 0;
    }
    else if (num1 == num2)
    {
        GCD = num1;
    }
    else if (num1 > num2)
    {
        return gcd(num1 - num2, num2);
    }
    else
    {
        return gcd(num1, num2 - num1);
    }
}
