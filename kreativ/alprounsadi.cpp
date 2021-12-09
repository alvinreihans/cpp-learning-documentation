#include <iostream>
using namespace std;

int main()
{
    int input, kolom, baris;
    int k = 1;

    cout << "masukkan angka : ";
    cin >> input;

    for (baris = 0; baris < input; baris++)
    {
        for (kolom = 0; kolom < baris; kolom++)
        {
            if (k <= 9)
            {
                cout << k;
                k++;
            }
            else if (k > 9)
            {
                cout << k % 10;
                k++;
            }
        }
        cout << endl;
    }
}