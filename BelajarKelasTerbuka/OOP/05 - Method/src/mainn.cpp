#include <string>
#include <iostream>
using namespace std;

class Mhs
{
public:
    string nama;
    double ipk;

    Mhs(string inputNama, double inputIpk)
    {
        nama = inputNama; // tidak perlu menggunakan Mhs::
        ipk = inputIpk;
    }

    // fungsi di dalam kelas tanpa parameter dan tanpa return
    void tampilData()
    {
        cout << nama << " IPK : " << ipk << " dari fungsi di dalam kelas tanpa parameter dan tanpa return" << endl
             << endl;
    }

    // fungsi di dalam kelas dengan parameter dan tanpa return
    void ubahNama(const char *namaBaru)
    {
        Mhs::nama = namaBaru;
    }

    // fungsi di dalam kelas tanpa parameter dan dengan return
    string getNama()
    {
        return Mhs::nama;
    }
    double getIPK()
    {
        return ipk;
    }

    // fungsi di dalam kelas dengan parameter dan dengan return
    double katrolIPK(const double &tambahan)
    {
        return ipk += tambahan;
    }
};

// // fungsi di luar kelas
// void tampilData(Mhs data)
// {
//     cout << data.nama << " IPK : " << data.ipk << " dari fungsi di luar kelas" << endl;
// }

int main()
{
    system("cls");
    Mhs mahasiswa1 = Mhs("Ucup", 3.7);
    mahasiswa1.tampilData();
    mahasiswa1.ubahNama("Mario");
    mahasiswa1.tampilData();
    cout << mahasiswa1.getNama() << " IPK : " << mahasiswa1.getIPK() << " dipanggil dari fungsi di dalam kelas tanpa parameter dan dengan return" << endl
         << endl;
    mahasiswa1.katrolIPK(-0.7);
    cout << mahasiswa1.getNama() << " IPK : " << mahasiswa1.getIPK() << " dipanggil dari fungsi di dalam kelas tanpa parameter dan dengan return" << endl
         << endl;
}