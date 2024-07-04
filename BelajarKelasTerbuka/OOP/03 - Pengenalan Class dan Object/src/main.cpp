#include <iostream>
#include <string>
using namespace std;

// class
class Mahasiswa
{
public:
    string nama;
    string nim;
    string jurusan;
    double ipk;
};

int main()
{
    system("cls");

    Mahasiswa data1;
    data1.nama = "Alvin";
    data1.nim = "123456";
    data1.jurusan = "Memasak";
    data1.ipk = 3.7;

    Mahasiswa data2;
    data2.nama = "Ucup";
    cout << "Nama dari data 1: " << data1.nama << endl;
    cout << "NIM dari data 1: " << data1.nim << endl;
    cout << "Jurusan dari data 1: " << data1.jurusan << endl;
    cout << "IPK dari data 1: " << data1.ipk << endl;
    cout << endl;
    cout << "Nama dari data 2: " << data2.nama << endl;
    cout << "NIM dari data 2: " << data2.nim << endl;
    cout << "Jurusan dari data 2: " << data2.jurusan << endl;
    cout << "IPK dari data 2: " << data2.ipk << endl;
    return 0;
}