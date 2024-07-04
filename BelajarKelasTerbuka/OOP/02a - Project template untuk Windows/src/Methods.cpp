#include <iostream>
#include <string>
using namespace std;

// class dengan construnctor
class Mahasiswa
{
public:
    string nama;
    double ipk;
    // constructor dengan parameter
    Mahasiswa(string inputNama, double inputIpk)
    {
        nama = inputNama;
        ipk = inputIpk;
    }

    // method tanpa parameter dan  tanpa return
    void showData()
    {
        cout << nama << endl;
        cout << ipk << endl;
    }

    // method dengan parameter dan tanpa return
    void ubahNama(const char *namaBaru)
    {
        nama = namaBaru;
    }

    // method tanpa parameter dan dengan return
    string getNama()
    {
        return nama;
    }
    double getIpk()
    {
        return ipk;
    }

    // method dengan parameter dan dengan return
    double katrolIpk(const double &tambahanNilai)
    {
        return ipk + tambahanNilai;
    }
};

// main function
int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("Ucup", 4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("Udin", 3.0);
    mahasiswa1.showData();
    mahasiswa2.showData();

    mahasiswa1.ubahNama("Mamank");
    mahasiswa1.showData();

    string dataNama = mahasiswa1.getNama();
    cout << dataNama << endl;
    cout << mahasiswa1.getIpk() << endl;

    cout << mahasiswa1.katrolIpk(-2.23) << endl;

    return 0;
}