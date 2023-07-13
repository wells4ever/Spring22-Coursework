#include <iostream>

using namespace std;
int add (int, int);
int main()
 {
    int sum, input1, input2;
    cout << "input 2 numbers " << endl;
    cin >> input1 >> input2;
    sum = add(input1, input2);
    cout << "sum = " << sum << endl;

    return (0);
}
int add(int x, int y) {
    int sum;
    sum = x + y;
    return (sum);
}