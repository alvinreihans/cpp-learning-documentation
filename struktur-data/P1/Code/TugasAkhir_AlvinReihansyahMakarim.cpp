#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    string day[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int sales[7][1];
    int counter, lowest, highest, totalSales = 0;
    string lowestDay, highestDay;

    cout << "============================================================" << endl
        << "======= Selamat datang di program analisis penjualan =======" << endl
        << "============================================================" << endl
        << endl;

    cout << "Silahkan masukkan jumlah penjualan untuk setiap hari berikut : " << endl;

    for (counter = 0; counter < 7; counter++){
        cout << endl;
        cout << day[counter] << endl;
        cout << "Jumlah penjualan : ";
        cin >> sales[counter][0];
        if (sales[counter][0] >= highest) {
            highest = sales[counter][0];
            highestDay = day[counter];
        }
        if (sales[counter][0] <= lowest) {
            lowest = sales[counter][0];
            lowestDay = day[counter];
        }
        totalSales += sales[counter][0];
    }
    cout << endl;

    cout << "============================================" << endl
        << "======= Analisis penjualan pekan ini =======" << endl
        << "============================================" << endl;
    cout << left << setw(10) << "Hari" << left << setw(5) << "Jumlah Penjualan" << endl;
    
    for (counter = 0; counter < 7; counter++) {
        cout << left << setw(10) << day[counter]
            << left << setw(5) << sales[counter][0]
            << endl << endl;
    }

    cout << "Penjualan tertinggi ada pada hari "
        << highestDay << ", yaitu sebesar "
        << highest << " pcs" << endl << endl;
    cout << "Penjualan terendah ada pada hari "
        << lowestDay << ", yaitu sebesar "
        << lowest << " pcs" << endl << endl;
    cout << "Total penjualan pekan ini adalah sebanyak "
        << totalSales << " pcs" << endl << endl;
    cout << "Rata-rata penjualan per hari pada pekan ini adalah sebanyak "
        << totalSales / 7 << " pcs" << endl << endl;

    return 0;
}
