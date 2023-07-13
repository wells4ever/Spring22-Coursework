//Philip Wells
//Lab 08
// Program to output pythagorean triplets within a defined or input limit
#include <iostream>

using namespace std;
void triples(int limit);
int main()
{
    int limit = 100;
    triples(limit);
    return 0;

}
void triples(int limit)
{

    int side1, side2, hypo = 0;
 
    int x = 2;
 
    while (hypo < limit) {
 
  
        for (int y = 1; y < x; y++) {
 
            //translating into common variables for efficency
            //side1^2 = x^4 + y^4 - 2*x^2*y^2 ---> side1 = x^2 - y^2
            //side2^2 = 4 * x^2 * y^2 ---> side2 = 2xy
            //hypo^2 = x^4 + y^4 +2 * x^2 * y^2 ---> hypo = x^2 + y^2
            side1 = x * y - y * y;
            side2 = 2 * x * y;
            hypo = x * x + y * y;
 
            if (hypo > limit)
                break;
 
            cout << side1 << " : " << side2 << " : " << hypo << endl;
        }
        x++;
    }
}
// PS C:\COSC assignments> ./triples
// 1 : 4 : 5
// 2 : 6 : 10
// 2 : 12 : 13
// 3 : 8 : 17
// 4 : 16 : 20
// 3 : 24 : 25
// 4 : 10 : 26
// 6 : 20 : 29
// 6 : 30 : 34
// 4 : 40 : 41
// 5 : 12 : 37
// 8 : 24 : 40
// 9 : 36 : 45
// 8 : 48 : 52
// 5 : 60 : 61
// 6 : 14 : 50
// 10 : 28 : 53
// 12 : 42 : 58
// 12 : 56 : 65
// 10 : 70 : 74
// 6 : 84 : 85
// 7 : 16 : 65
// 12 : 32 : 68
// 15 : 48 : 73
// 16 : 64 : 80
// 15 : 80 : 89
// 12 : 96 : 100