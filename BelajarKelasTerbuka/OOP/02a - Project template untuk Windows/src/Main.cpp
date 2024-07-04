#include <iostream>
#include <string>
using namespace std;

// class
class Mahasiswa
{
    // public
public:
    string nama, nim, jurusan;
    double ipk;
    // private
    // protected
};

// main function
int main()
{
    Mahasiswa data1;
    data1.nama = "udin";
    data1.nim = "1212431531";
    data1.jurusan = "memasak";
    data1.ipk = 10;
    Mahasiswa data2;
    data2.nama = "ucup";

    cout << "Nama dari data 1 adalah " << data1.nama << endl;
    cout << "Jurusan dari data 1 adalah " << data1.jurusan << endl;
    cout << "IPK dari data 1 adalah " << data1.ipk << endl;
    cout << "NIM dari data 1 adalah " << data1.nim << endl
         << endl;
    cout << "Nama dari data 2 adalah " << data2.nama << endl;
    return 0;
}