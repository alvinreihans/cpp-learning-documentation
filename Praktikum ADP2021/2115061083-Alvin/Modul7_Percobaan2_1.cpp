#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sisiA = 0.0;
    double sisiB = 0.0;
    double jumlahPangkat = 0.0;
    double sisiC = 0.0; //sisi miring

    //dapatkan panjang sisi A dan sisi B
    cout << "Panjang sisi A: ";
    cin >> sisiA;
    cout << "Panjang sisi B: ";
    cin >> sisiB;

    //hitung panjang sisi miring
    jumlahPangkat = pow(sisiA, 2) + pow(sisiB, 2);
    sisiC = sqrt(jumlahPangkat);

    //tampilkan panjang sisi miring
    cout << "Panjang sisi miring: " << sisiC << endl;
    return 0;
}
