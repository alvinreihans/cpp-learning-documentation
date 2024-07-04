#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa
{
public:
    string nama, nim, jurusan;

    Mahasiswa(string nama, string nim, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::nim = nim;
        Mahasiswa::jurusan = jurusan;
    }
};

class Dbase
{
public:
    ifstream in;
    ofstream out;
    string fileName;

    Dbase(const char *fileName)
    {
        Dbase::fileName = fileName;
    }

    void save(Mahasiswa data)
    {
        cout << data.nama << endl;
        cout << data.nim << endl;
        cout << data.jurusan << endl;

        out.open(fileName, ios::app);
    }
};

int main()
{
    Mahasiswa dataMahasiswa = Mahasiswa("ucup", "1242356", "Memasak");
    Dbase database = Dbase("data.txt");

    // save ke database
    database.save(dataMahasiswa);
}