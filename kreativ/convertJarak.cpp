#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("cls");
    int from, to;
    double nilaiAwal, hasil;
    string satuan[] = {"km",
                       "hm",
                       "dam",
                       "m",
                       "dm",
                       "cm",
                       "mm"};
    string awal;
    cout << "Satuan awal : ";
    cin >> awal;
    string akhir;
    cout << "Satuan akhir : ";
    cin >> akhir;
    cout << "Nilai awal : ";
    cin >> nilaiAwal;

    for (int i = 0; i < sizeof(satuan); i++)
    {
        if (awal == satuan[i])
        {
            from = i + 1;
        }
        if (akhir == satuan[i])
        {
            to = i + 1;
        }
    }

    if (from < to)
    {
        to -= from;
        hasil = nilaiAwal * pow(10, to);
        cout << hasil;
    }
    else if (from > to)
    {
        from -= to;
        hasil = nilaiAwal / pow(10, from);
        cout << hasil;
    }
    else
    {
        cout << nilaiAwal;
    }
}