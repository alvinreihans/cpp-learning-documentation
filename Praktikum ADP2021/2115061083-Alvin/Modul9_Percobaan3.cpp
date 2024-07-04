#include <iostream>
using namespace std;

int main()
{
    double tempData[7][2];
    double lowestTemp, highestTemp;
    int x, y;
    cout << "Masukkan suhu terendah kemudian tertinggi dalam satu hari" << endl;
    for (x = 0; x < 7; x++)
    {
        for (y = 0; y < 2; y++)
        {
            cin >> tempData[x][y];
            lowestTemp += tempData[x][0];
            highestTemp += tempData[x][1];
        }
    }
    for (x = 0; x < 7; x++)
    {
        for (y = 0; y < 2; y++)
        {
            cout << tempData[x][y] << endl;
        }
    }

    cout << "Rata rata suhu tertinggi: " << highestTemp << endl;
    cout << "Rata rata suhu terendah: " << lowestTemp << endl;
}