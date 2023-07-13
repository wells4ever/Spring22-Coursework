#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int draw1, draw2, draw3;
    int win = 0;
    int loss = 0;
    int match = 0;
    int ball1,ball2,ball3;
int main()
{
    
    int winnings;
    int losses;
    
    cout << "Please enter three numbers between 0 and 9." << endl;
    cin >> draw1 >> draw2 >> draw3;

    for (int i = 0; i <= 10000; i++)
{
   
       ball1 = rand() % 10;
   ball2 = rand() % 10;
   ball3 = rand() % 10;
    if (draw1 == ball1){
    match++;
}if (draw2 == ball2) {
    match++;
}if (draw3 == ball3) {
    match++;
}if (match == 3) {
    win++;
}else {
    loss++;
}
}

    winnings = win * 500 - (win);
    losses = loss;
    cout << "Total Wins : " << win << " and Total Winnings : "
         << "$" << winnings << endl;
    cout << "Total Losses : " << loss <<endl;
    return (0);
}
// Please enter three numbers between 0 and 9.
// 3
// 5
// 8
// Total Wins : 3 and Total Winnings : $1497
// Total Losses : 9997
    


