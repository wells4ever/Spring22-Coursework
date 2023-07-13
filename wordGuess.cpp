#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Player 1, enter a word to be guessed: " << endl;

    string answer;

    cin >> answer;

    string guessedAnswer;

    for (int i = 0; i < answer.length(); i++)

    {

        guessedAnswer.append("*");
    }
    while (guessedAnswer != answer)

    {
        for (int i = 1; i < 10; i++)
        {

            cout << "\nPlayer 2, enter a letter to guess the word." << endl;
            string guessedLetter;

            cin >> guessedLetter;
            if (answer.find(guessedLetter) != -1)

            {
                cout << "That letter is present in the word." << endl;

                int guessedLetterPosition = answer.find(guessedLetter);
                guessedAnswer.replace(guessedLetterPosition, 1, guessedLetter);

                cout << guessedAnswer << endl;
                if (guessedAnswer == answer)
                {
                    break;
                }
            }
            else
            {
                cout << "That letter is not present in the word." << endl;
            }
        }
    }
    cout << "\nCorrect! The answer is: " << answer << endl;
}