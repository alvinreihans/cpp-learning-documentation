#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int barrier;
    int NPM;
    string Nama;
    string Alamat;
    ofstream data_mahasiswa;
    data_mahasiswa.open ("Data2mahasiswa.txt");
    if (data_mahasiswa.is_open()) {
        cout << "Masukkan batasan data mahasiswa = ";
        cin >> barrier;
        for (int x=0;x<barrier;x++){
            cout << "Masukkan nama = "; cin >> Nama;
            cout << "Masukkan NPM = "; cin >> NPM;
            cout << "Masukkan Alamat = "; cin >> Alamat;
            cout << NPM << " # " << Nama << " # " << Alamat;
            data_mahasiswa << NPM << " # " << Nama << " # " << Alamat << endl;
            cout << endl;
        } 
        data_mahasiswa.close();
    }
    else {
        cout << "Kesalahan";
    }
}