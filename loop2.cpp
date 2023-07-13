#include <iostream> 

using namespace std;

int main()
{
    int i = 0;
    string name = "Philip Wells";
    char ch = name [0];

    while (ch != '\0')
     {
        cout << ch << endl;
        ch++;
    }
    
}
//for (char thisChar = 'A'; thisChar <= 'Z' ; thisChar++) {
    //    cout << "char = " << thisChar << endl;
    //}
    //for (char thatChar = 'Z'; thatChar >= 'A' ; thatChar--) {
    //    cout << "backchar = " << thatChar << endl;
    //}