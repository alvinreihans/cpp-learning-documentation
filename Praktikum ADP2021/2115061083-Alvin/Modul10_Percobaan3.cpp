#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int npm, jumlah;
    string nama, alamat;

    cout << "Jumlah mahasiswa : ";
    cin >> jumlah;
    ofstream outFile;
    outFile.open("Mahasiswa.txt");
    if (outFile.is_open())
    {
        for (int x = 0; x < jumlah; x += 1)
        {
            cin.ignore();
            cout << "Nama: ";
            getline(cin, nama);

            cout << "NPM: ";
            cin >> npm;
            cin.ignore();

            cout << "Alamat: ";
            getline(cin, alamat);

            outFile << npm << "#" << nama << "#" << alamat << endl;
        }
        outFile.close();
    }
    else
    {
        cout << "Tidak dapat membuka file 'Mahasiswa.txt'" << endl;
    }
    return 0;
}
