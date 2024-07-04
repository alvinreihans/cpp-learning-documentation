#include <iostream>
using namespace std;
int main()
{
    double temp[7][2];
    string day[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    double lowestTemp = 0;
    double highestTemp = 0;
    for (int i = 0; i < 7; i++)
    {
        cout << day[i] << endl;
        cout << "Masukkan suhu terendah: ";
        cin >> temp[i][0];
        cout << "Masukkan suhu tertinggi: ";
        cin >> temp[i][1];
        lowestTemp += temp[i][0];
        highestTemp += temp[i][1];
    }
    cout << endl
         << endl;
    cout << "Hari\tTerendah\tTertinggi" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << day[i] << "\t" << temp[i][0] << "\t\t" << temp[i][1] << endl;
    }
    cout << "Rata-rata suhu tertinggi: " << highestTemp / 7 << endl;
    cout << "Rata-rata suhu terendah: " << lowestTemp / 7 << endl;
}
