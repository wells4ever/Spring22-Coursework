#include <iostream>

using namespace std;

int main()
{
    string notesArray[12] =
    {
        "A",
        "A#",
        "B",
        "C",
        "C#",
        "D",
        "D#",
        "E",
        "F",
        "F#",
        "G",
        "G#"
    };

    string triadsArray[12];

    int i = 0;

    do
    {
        string firstNote = notesArray[i];
        string secondNote;
        string thirdNote;

        secondNote = notesArray[(i + 4)%12];
        thirdNote = notesArray[(i + 7) % 12];

        triadsArray[i] = firstNote + "\t" + secondNote + "\t" + thirdNote;
        cout << "\nTriad number " << i << " : " << triadsArray[i];
        i++;

    } while (i < 12);
    
}