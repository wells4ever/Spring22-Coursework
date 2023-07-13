#include <iostream>

using namespace std;
void sort(int &x, int &y, int &z);
bool needToSwap(int x, int y);
void swapNumbers(int &a, int &b);
int order;

    int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    
    cout << "enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    cout << "Do you wish to see ascending or descending order?(0 for ascending, 1 for descending)";
    cin >> order;

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
    { cout << "debug";
        swapNumbers(y, z);
    }
    
}

bool needToSwap(int x, int y)
{
     bool result = false;
    switch (order){
    
     case 0:

    if (x > y)
    {
        result = true;
    }
    return result;
    case 1:
    if (x < y)
    {
        result = true;
    }
    return result;
}}

void swapNumbers(int &a, int &b)
{
    int t=0;
    t = b;
    b = a;
    a = t;
}
// PS C:\COSC assignments> ./sort
// enter three numbers : 22
// 15
// 19
// Do you wish to see ascending or descending order?(0 for ascending, 1 for descending)1
// before sort :  22:15:19
// after sort : 22:19:15
// PS C:\COSC assignments> ./sort
// enter three numbers : 22
// 15
// 19
// Do you wish to see ascending or descending order?(0 for ascending, 1 for descending)0
// before sort :  22:15:19
// debugafter sort : 15:19:22