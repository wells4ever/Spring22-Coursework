#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int day;
    int total = 1;
    int totalDollar;
    int totalMult;
       for ((day=0); day <=30 ; day++){
           for (total=1; ; total + (total * 2)){
            totalDollar = total / 100;
            cout << total << endl;
            total = totalMult;
            totalMult = total;
           }
   } 
}