#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string nama, nim, kelas;
    cout << "Masukkan nama : ";
    cin >> nama;
    cout << "Masukkan nim : ";
    cin >> nim;
    cout << "Masukkan kelas : ";
    cin >> kelas;

    //clearscreenSystem
    system("cls");
    cout << "Nama saya " << nama << ", nim " << nim << ", kelas " << kelas << ".";
}