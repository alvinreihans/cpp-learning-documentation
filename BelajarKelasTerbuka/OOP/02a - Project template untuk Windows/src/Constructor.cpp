#include <iostream>
#include <string>
using namespace std;

// class tanpa construnctor
class Polos
{
public:
    string datastring;
    int dataInteger;
};

// class dengan construnctor
class Mahasiswa
{
public:
    string nama, nim, jurusan;
    double ipk;
    // construnctor
    // Mahasiswa()
    //{
    //    cout << "Ini adalah constructor" << endl;
    // }

    // constructor dengan parameter
    Mahasiswa(string inputNama, string inputNim, string inputJurusan, double inputIpk)
    {
        Mahasiswa::nama = inputNama;
        Mahasiswa::nim = inputNim;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::ipk = inputIpk;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::ipk << endl;
        cout << Mahasiswa::nim << endl;
    }
};

// main function
int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("Ucup", "12455235636", "Mensasak", 4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("Udin", "12348808767", "Mensasak", 3.0);

    // Polos objectPolos;
    // objectPolos.datastring = "Polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.datastring << endl;
    // cout << objectPolos.dataInteger << endl;
    return 0;
}