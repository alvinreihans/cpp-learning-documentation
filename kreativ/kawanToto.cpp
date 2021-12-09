#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int income = 0, total = 0, totalNew, monthNew;
    int month = 1;

    ofstream dataOut;
    ifstream dataIn("data.txt");
    if (dataIn.is_open())
    {
        // membaca data awal
        dataIn >> month >> total; // menaruh data pada variabel
        cout << "Data saat ini" << endl
             << "Bulan ke-" << month << " : " << total << endl
             << "-- -- -- -- -- -- -- -- -- -- -" << endl;
        monthNew = month;
        totalNew = total;
        monthNew++;
        cout << "Income bulan ke-" << monthNew << " : ";
        cin >> income;
        totalNew += income;
        dataIn.close();
        // selesai membaca data awal
        dataOut.open("data.txt");
        dataOut << monthNew << " " << totalNew;
        dataOut.close();

        cout << endl
             << "Data diupdate";
    }
    else
    {
        dataOut.open("data.txt");
        cout << "Income bulan ke-" << month << " : ";
        cin >> income;
        total += income;
        dataOut << month << " " << total;
        month++;
        cout << "Data dibuat";
        dataOut.close();
    }
    system("start /min notepad data.txt");
    return 0;
}