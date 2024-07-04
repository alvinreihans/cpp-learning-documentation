#include <iostream>
using namespace std;
int main()
{
    int maxRows = 0;

    cout << "Maximum number of rows: ";
    cin >> maxRows;
    cout << endl;
    for (int row = 0; row < maxRows; row += 1)
    {
        for (int space = 0; space < maxRows - row; space += 1)
        {
            cout << " ";
        }
        for (int asterisk = 0; asterisk <= row; asterisk += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
