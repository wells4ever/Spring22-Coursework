#include <iostream> 
#include <cmath>

using namespace std;

int main ()
{
    char ch = 'D';
while ('A' <= ch && ch <= 'Z') {

         ch = static_cast<char>(static_cast<int>(ch) + 1);
         cout << ch<< endl;

}}
//     int n;
//     for (n = 100; n <= 100 && n >0; n--){
//     if (n % 2 == 0){
//     cout << n << endl;
//     }
//     else {
//     continue;
//     }}
// }