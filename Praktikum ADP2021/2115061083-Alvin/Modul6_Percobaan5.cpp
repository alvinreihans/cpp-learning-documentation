#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "Masukkan Angka : ";
    cin >> input;
    for (int x = 1; x <= input; x++)
    {
        for (int y = input; y >= x; y--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
