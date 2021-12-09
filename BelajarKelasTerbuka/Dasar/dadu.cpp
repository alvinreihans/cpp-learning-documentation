#include <iostream>
#include <cstdlib> //mengandung fungsi random
using namespace std;

int main()
{
    char lanjut;

    cout << "Lempar dadu? (y/n): " << endl;
    cin >> lanjut;
    while (true)
    {
        if (lanjut == 'y')
        {
            cout << (rand() % 6) << endl;
            cout << "ulang? (y/n): " << endl;
            cin >> lanjut;
        }
        else if (lanjut == 'n')
        {
            break;
        }
        else
        {
            cout << "input salah" << endl;
            cout << "coba lagi? (y/n): " << endl;
            cin >> lanjut;
        }
    }
}