#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char letter = ' ';
    ofstream outFile;
    outFile.open("Data.txt");
    if (outFile.is_open())
    {
        for (int x = 1; x < 11; x += 1)
        {
            cout << "Enter letter " << x << ": ";
            cin >> letter;
            letter = toupper(letter);
            outFile << letter << endl;
        } //end for
        outFile.close();
    }
    else
        cout << "Can't open the Data.txt file."
             << endl;
    //end if
    return 0;
}
