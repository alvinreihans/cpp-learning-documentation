#include <iostream>
using namespace std;
int main()
{
    int hasilSurvey[12] = {20, 30, 25, 15, 90, 34, 21, 17, 40, 55, 34, 38};
    int minimumMenit = 0;
    int jumlahPengguna = 0;
    int totalWaktu;
    int avgWaktu;
    cout << "Jumlah menit minimum?" << endl;
    cin >> minimumMenit;
    for (int i = 0; i < 12; i++)
    {
        if (hasilSurvey[i] > minimumMenit)
        {
            jumlahPengguna++;
            totalWaktu += hasilSurvey[i];
        }
    }
    avgWaktu = totalWaktu / jumlahPengguna;
    cout << "Jumlah pengguna yang menghabiskan waktu lebih dari ";
    cout << minimumMenit << " menit adalah " << jumlahPengguna;
    cout << " orang." << endl;
    cout << "Rata-rata waktu penggunaan aplikasi Facebook adalah " << avgWaktu << " menit";
}
