#include <iostream>
#include <fstream>
using namespace std;

struct mahasiswa
{
    string name;
    char nim[8];
    string fakultas;
    char angkatan[2];
} mahasiswa[5];

int main()
{
    int jumlah;
    mahasiswa;
    cout << "Jumlah mahasiswa : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++)
    {
        cin.ignore();
        cout << "Nama : ";
        getline(cin, mahasiswa[i].name);
        cout << "NIM : ";
        (cin >> mahasiswa[i].nim).get();
    }
    for (int i = 0; i < jumlah; i++)
    {
        if (mahasiswa[i].nim[0] = 'M')
        {
            mahasiswa[i].fakultas = "MIPA";
        }
        else if (mahasiswa[i].nim[0] = 'F')
        {
            mahasiswa[i].fakultas = "FEB";
        }
        else if (mahasiswa[i].nim[0] = 'C')
        {
            mahasiswa[i].fakultas = "FSRD";
        }
        else if (mahasiswa[i].nim[0] = 'G')
        {
            mahasiswa[i].fakultas = "Kedokteran";
        }
        else if (mahasiswa[i].nim[0] = 'I')
        {
            mahasiswa[i].fakultas = "Teknik";
        }
    }
    cout << mahasiswa[0].name << endl
         << mahasiswa[0].nim << endl
         << mahasiswa[0].fakultas << endl;
}