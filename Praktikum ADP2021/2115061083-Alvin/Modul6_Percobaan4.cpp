#include <iostream>
using namespace std;

int main()
{
    int cols, rows, input;

    cout << "Banyak baris = ";
    cin >> input;

    for (cols = 1; cols <= input; cols++)
    {
        for (rows = 1; rows <= cols; rows++)
        {
            cout << rows;
        }

        cout << endl;
    }
}
