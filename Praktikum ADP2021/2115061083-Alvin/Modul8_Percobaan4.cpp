#include <iostream>
using namespace std;
int main()
{
    int hasilSurvey[12];
    int minimumMenit = 0;
    int jumlahPengguna = 0;
    cout << "Masukkkan data" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> hasilSurvey[i];
    }
    cout << "Jumlah menit minimum?" << endl;
    cin >> minimumMenit;
    for (int i = 0; i < 12; i++)
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