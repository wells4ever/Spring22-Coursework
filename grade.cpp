#include <iostream>

using namespace std;

int main()
{
    int grade = 0;
    char letterGrade;
    cout << "What is your grade?" << endl;
    cin >> grade;

    // pseudocode
    // if the grade >= 90 then the lettergrade -> A
    // if the grade >= 80 then the lettergrade -> B
    // if the grade >= 70 then the lettergrade -> C
    // if the grade >= 60 then the lettergrade -> D
    //  otherwise lettergrade -> F
    if (grade >= 90)
    {
        letterGrade = 'A';
    }
    else if (grade >= 80)
    {
        letterGrade = 'B';
    }
    else if (grade >= 70)
    {
        letterGrade = 'C';
    }
    else if (grade >= 60)
    {
        letterGrade = 'D';
    }
    else if (grade < 60)
    {
        letterGrade = 'F';
    }
    cout << "Your grade is: " << letterGrade << endl;
    return (0);
}