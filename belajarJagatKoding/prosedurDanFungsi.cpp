#include <iostream>
using namespace std;

//prosedur > tidak memiliki nilai kembalian, namun dapat diulang2
void siswa()
{
    string nama = "alex";
    string jk = "cowo";

    cout << nama << " " << jk << endl;
}

//fungsi > memiliki nilai kembalian
string siswi()
{
    string nama = "alexa";
    string jk = "girl";
    return (nama + " " + jk);
}

//prosedur dengan parameter
string supir(string namaSupir, string trayek)
{
    return (namaSupir + " dengan trayek " + trayek);
}

int main()
{
    string namaSupir, trayek;
    siswa();
    cout << siswi() << endl;
    cout << "siapa namanya? " << endl;
    cin >> namaSupir;
    cout << "kemana? " << endl;
    cin >> trayek;
    cout << supir(namaSupir, trayek);
}