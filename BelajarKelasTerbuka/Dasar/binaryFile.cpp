#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct mhs
{
    int nim;
    string nama;
    string jurusan;
};

int main()
{
    system("cls");
    fstream myFile;
    mhs dataBaca;
    myFile.open("data2.bin", ios::in | ios::binary);

    // membaca file binary

    myFile.read(reinterpret_cast<char *>(&dataBaca), sizeof(mhs));

    cout << dataBaca.nim << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    myFile.close();

    return 0;

    ////menulis file binary
    // mhs mahasiswa1, mahasiswa2, mahasiswa3;

    // mahasiswa1.nim = 123;
    // mahasiswa1.nama = "Udin";
    // mahasiswa1.jurusan = "Teknik mencuci";

    // mahasiswa1.nim = 456;
    // mahasiswa1.nama = "Ucup";
    // mahasiswa1.jurusan = "Teknik memasak";

    // mahasiswa1.nim = 789;
    // mahasiswa1.nama = "Ujang";
    // mahasiswa1.jurusan = "Teknik menjemur";

    // myFile.write(reinterpret_cast<char *>(&mahasiswa1), sizeof(mahasiswa1));
    // myFile.write(reinterpret_cast<char *>(&mahasiswa2), sizeof(mahasiswa2));
    // myFile.write(reinterpret_cast<char *>(&mahasiswa3), sizeof(mahasiswa3));
}

// // membaca file binary
// fstream myFile;
// int hasil;
// myFile.open("data.bin", ios::in | ios::binary);

// myFile.read(reinterpret_cast<char *>(&hasil), sizeof(hasil));

// cout << sizeof(hasil) << endl;
// cout << hasil << endl;

// // menulis file binary
// fstream myFile;
// int number = 12345;
// myFile.open("data.bin", ios::out | ios::binary);

// myFile.write(reinterpret_cast<char *>(&number), sizeof(number));

// myFile.close();