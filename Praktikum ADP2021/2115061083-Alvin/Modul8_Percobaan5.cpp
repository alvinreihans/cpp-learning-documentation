#include <iostream>
using namespace std;
int main()
{

    int minimumMenit = 0;
    int jumlahPengguna = 0;
    int jumlahData;
    cout << "Jumlah data : ";
    cin >> jumlahData;
    int hasilSurvey[jumlahData];
    cout << "Masukkkan data" << endl;
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> hasilSurvey[i];
    }
    cout << "Jumlah menit minimum?" << endl;
    cin >> minimumMenit;
    for (int i = 0; i < jumlahData; i++)
    {
        if (hasilSurvey[i] > minimumMenit)
        {
            jumlahPengguna++;
        }
    }
    cout << "Jumlah pengguna yang menghabiskan waktu lebih dari ";
    cout << minimumMenit << " menit adalah " << jumlahPengguna;
    cout << " orang." << endl;
}