#include <iostream>
using namespace std;

#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6

int main()
{
    int dayOfWeek = 0;

    cout << "What day of week is it? ";
    cin >> dayOfWeek;

    switch (dayOfWeek)
    {
    case SUNDAY:
        cout << "go to church" << endl;
        break;
    case MONDAY:
    case WEDNESDAY:
        cout << "go to school" << endl;
        cout << "go to work after school" << endl;
        break;
    case TUESDAY:
    case THURSDAY:
        cout << "go to work" << endl;
        break;
    case FRIDAY:
    case SATURDAY:
        cout << "day off" << endl;
        break;
    }
}