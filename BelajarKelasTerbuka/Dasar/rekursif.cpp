#include <iostream>
using namespace std;

//fungsi rekursif terbatas
int pangkat(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

//fungsi pangkat rekursif
int pangkatRekursif(int a, int b)
{
    if (b <= 1)
    {
        cout << "akhir dari rekursif" << endl;
        return a;
    }
    else
    {
        cout << "rekursif" << endl;
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main()
{
    int a;
    int b;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;
    cout << "hasil iterasi = " << pangkat(a, b) << endl;
    cout << "hasil rekursif = " << pangkatRekursif(a, b) << endl;
}