#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string name;
    int age;

    cout << "Hello World" << endl;

    //cout << "What is your name?" << endl;
   // cin >> name;

    //cout << "How old are you?" << endl;
    //cin >> age;
    
    cout << "What is your name and your age?" << endl;
    cin >> name >> age;

    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;

    return 0;

}