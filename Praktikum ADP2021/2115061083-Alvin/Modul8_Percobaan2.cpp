#include <iostream>
using namespace std;
int main()
{
    double hasilSurvey[12] = {20.5, 30, 25, 15, 90, 34, 21, 17, 40, 55, 34, 38};
    double minimumMenit = 0;
    int jumlahPengguna = 0;
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