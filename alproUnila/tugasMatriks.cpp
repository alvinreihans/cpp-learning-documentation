/*Menentukan apakah sebuah matriks
adalah matriks satuan dari masukan pengguna*/
#include <iostream>
using namespace std;
int main()
{
    // KAMUS
    //deklarasi matriks
    int M[10][10];
    //deklarasi input user untuk banyak kolom dan baris efektif
    int NBrs, NKol;
    /*deklarasi alat penelusur matriks.
    x untuk banyak baris dan y untuk banyak kolom*/
    int x, y;
    //deklarasi alat penentu matriks satuan atau bukan
    bool NonSatDetect;
    int b, k;

    // ALGORITMA
    //user membuat matriks
    //menentukan besar matriks oleh user
    cout << "Baris efektif = ";
    cin >> NBrs;
    cout << "Kolom efektif = ";
    cin >> NKol;

    cout << endl;

    //Mengisi matriks
    for (x = 0; x < NBrs; x++)
    {
        for (y = 0; y < NKol; y++)
        {
            cout << "Elemen ke-[" << x << ", " << y << "] = ";
            cin >> M[x][y];
        }
    }
    cout << endl;
    // Menuliskan isi matriks
    for (x = 0; x < NBrs; x++)
    {
        for (y = 0; y < NKol; y++)
        {
            cout << M[x][y] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    NonSatDetect = false;
    b = 0;
    k = 0;
    //menentukan apakah matriks yang diinput user adalah matriks satuan atau bukan
    for (x = 0; x < NBrs; x++)
    {
        for (y = 0; y < NKol; y++)
        {
            //apakah matriks simetris dan hanya beranggotakan 0 atau 1?
            if (NKol == NBrs && M[x][y] <= 1 && M[x][y] >= 0)
            {
                //jika ya
                NonSatDetect = false; // matriks adalah satuan
            }
            //jika tidak
            else
            {

                NonSatDetect = true; //matriks bukan matriks satuan
            }
        }
    }
    // Menuliskan tipe matriks
    //jika diketahui matriks bukan matriks satuan, maka
    if (NonSatDetect == true)
    {
        cout << "Matriks ini bukan matriks satuan";
    }
    //jika diketahui matriks adalah matriks satuan, maka
    else
    {
        cout << "Matriks ini adalah matriks satuan";
    }
    return 0;
}