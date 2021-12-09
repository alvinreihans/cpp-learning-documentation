#include <iostream>
#include <fstream> // untuk memproses file
using namespace std;

int main()
{
    ofstream file;
    string a;
    file.open("ofstream.txt");
    system("start /min notepad ofstream.txt");
    cout << "Masukkan kalimat : ";
    getline(cin, a);

    file << "Isi input : " << a << " ";

    system("start /min notepad ofstream.txt");
    // system("start / min notepad ofstream.txt") berfungsi untuk menampilkan output dalam bentuk .txt
    //  "/P" berfungsi untuk memerintahkan sistem agar mengeprint output .txt menggunakan printer
}