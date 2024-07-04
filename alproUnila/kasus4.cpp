#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string namaDepan, namaBelakang;
    double ipk, count = 0.0;
    ofstream mahasiswaIpk3;

    ifstream mahasiswa("IPK.dat");
    mahasiswaIpk3.open("IPK_3.dat");

    if (mahasiswa.is_open() && mahasiswaIpk3.is_open())
    {
        while (mahasiswa >> namaDepan >> namaBelakang >> ipk)
        {
            if (ipk >= 3.0)
            {
                cout << namaDepan << " " << namaBelakang << "\t" << ipk << endl;
                mahasiswaIpk3 << namaDepan << " " << namaBelakang << "\t" << ipk << endl;
                count++;
            }
        }
        if (count != 0.0)
        {
            cout << "Data berhasil dipisah" << endl;
        }
        else
        {
            cout << "File kosong" << endl;
        }
        mahasiswa.close();
        mahasiswaIpk3.close();
    }
    else
    {
        cout << "Failed to open data" << endl;
    }
}
