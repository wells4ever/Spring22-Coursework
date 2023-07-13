#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string isPalindrome(string input);

int main()
{
    string input;

    cout << "Please enter a string to test if it is a palindrome (same forwards and backwards)." << endl;

    do
    {

        getline(cin, input);

    } while (input.empty());

    input.erase((remove(input.begin(), input.end(), ' ')), input.end());
    
    cout << isPalindrome(input);

    return 0;
}
string isPalindrome(string input)
{
    string revertedInput = input;

    reverse(revertedInput.begin(), revertedInput.end());

    if (input == revertedInput)
    {
        return "Yes it is a palindrome";
    }
    else
    {
        return "No it is not a palindrome";
    }
}
