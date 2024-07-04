#include <iostream>
using namespace std;
int main()
{
    int peserta, A, B, error = 1;
    system("cls");
    cout << "Program Pemira" << endl
         << "Banyak peserta : ";
    cin >> peserta;
    int voting[peserta];

    for (int i = 0; i < peserta; i++)
    {
        while (error == 1)
        {
            system("cls");
            cout << "Paslon BEM" << endl
                 << "1. Nilam Prastuti & Rangga Prasasta" << endl
                 << "2. Danang Sinaga & Liman Pangestu" << endl
                 << "Peserta ke " << i + 1 << " dipersilahkan memilih" << endl
                 << "Pilihan : ";
            cin >> voting[i];

            if (voting[i] == 1 || voting[i] == 2)
            {
                if (voting[i] == 1)
                {
                    A++;
                }
                else if (voting[i] == 2)
                {
                    B++;
                }
                break;
            }
        }
    }
    if (A < B)
    {
        system("cls");
        cout << "Paslon terpilih adalah Nilam Prastuti & Rangga Prasasta" << endl
             << "Perbandingan suara " << B << " : " << A;
    }
    else if (A > B)
    {
        system("cls");
        cout << "Paslon terpilih adalah Danang Sinaga & Liman Pangestu" << endl
             << "Perbandingan suara " << A << " : " << B;
    }
    else
    {
        system("cls");
        cout << "Hasil pemungutan suara seri";
    }
    return 0;
}