#include <iostream>

using namespace std;

int main()
{
    int rainchance;

    cout << "what is the rain chance today?" << endl;
    cin >> rainchance;

    if (rainchance > 30)
    {
        cout << "take your umbrella" << endl;
        if (rainchance > 60)
        {
            cout << "wear your boots" << endl;
        }
        if (30 < rainchance < 60)
        {
            cout << "wear your regular shoes" << endl;
        }
    }
    else
    {
        if (rainchance < 30)
            cout << "leave your umbrella at home" << endl;
    }
    return (0);
}
