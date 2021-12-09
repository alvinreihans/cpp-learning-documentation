// File: sumArray.cpp
// menghitung jumlah seluruh elemen pada array
#include <iostream>
using namespace std;
int main()
{ // KAMUS
    int sum, i;
    int TabInt[10];
    // ALGORITMA
    // mengisi data nilai dari input user
    cout << "Isilah 10 data nilai dalam range 0-100:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }
    // menjumlahkan nilai dan menghitung rata-rata
    cout << "Data input:" << endl;
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        cout << TabInt[i] << endl;
        sum = sum + TabInt[i];
    }
    cout << "Rata-rata: ";
    cout << (float)sum / 10.0 << endl;
    return 0;
}
