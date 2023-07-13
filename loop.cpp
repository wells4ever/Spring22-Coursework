#include <iostream>

using namespace std;

int main()
{
    int voteCount =0;       // loop control variable
    bool keepAsking = true;
    char response;
    while (keepAsking == true) 
    {
        cout << "Is there another vote to count (Y/N)? " ;
        cin >> response;
        if (response !='Y') {
            keepAsking = false;
        }
        //this is where votes are tallied
        voteCount = voteCount + 1;
        cout << "Ballot processed. ";
       
    }
    cout << "All ballots processed. " ;
    cout << "count = " << voteCount << endl;
}

// counter controlled loop "for" loops - ( 1 ; 2 ; 3 )  initializaion, evaluation, update 
//for (int count =10; count > 0 ; count--){
// cout << "count = " << count << endl;
//}
//cout << "Liftoff!" << endl;