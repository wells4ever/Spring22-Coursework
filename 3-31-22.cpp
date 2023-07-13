#include <iostream>

using namespace std;
void sort(int &x, int &y, int &z);
bool needToSwap(int x, int y);
void swapNumbers(int &a, int &b);

    int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    cout << "enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    cout << "before sort :  " << num1 << ":" << num2 << ":" << num3 << endl;

    sort(num1, num2, num3);

    cout << "after sort : " << num1 << ":" << num2 << ":" << num3 << endl;
}

void sort(int &x, int &y, int &z)
{
   
    if (needToSwap(y, z))
    {
        swapNumbers(y, z);
    }
      if (needToSwap(x, y))
    {
        swapNumbers(x, y);
    }
     if (needToSwap(y, z))
    {
        swapNumbers(y, z);
    }
    
}

bool needToSwap(int x, int y)
{
    bool result = false;

    if (x > y)
    {
        result = true;
    }
    return result;
}

void swapNumbers(int &a, int &b)
{
    int t=0;
    t = b;
    b = a;
    a = t;
}