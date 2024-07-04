#include <iostream>
using namespace std;

// abstrak
struct nilai
{
    double mtk;
    double bin;
    double bing;
    double ipa;
};

int main()
{
    system("cls");
    // primitif
    int katrol;  // deklarasi data primitif
    katrol = 12; // inisialisasi data primitif

    // koleksi
    int dataNilai[4] = {70, 80, 85, 90}; // deklarasi & inisialisasi data koleksi

    nilai alex;                       // deklarasi data abstrak
    alex.mtk = dataNilai[0] + katrol; // inisialisasi & manipulasi data abstrak
    alex.bin = dataNilai[1];          // inisialisasi data abstrak
    alex.bing = dataNilai[2];         // inisialisasi data abstrak
    alex.ipa = dataNilai[3];          // inisialisasi data abstrak

    alex.ipa += katrol; // manipulasi data abstrak

    cout << "Nilai mtk: " << alex.mtk << endl;
    cout << "Nilai Bing: " << alex.bing << endl;
    cout << "Nilai ipa: " << alex.ipa << endl;
    cout << "Nilai bin: " << alex.bin << endl;
}