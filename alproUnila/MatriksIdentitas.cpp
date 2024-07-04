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
    bool DetMat = false;

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

    if (NBrs == NKol)
    {
        for (x = 0; x < NBrs; x++)
        {
            for (y = 0; y < NKol; y++)
            {
                if (x == y)
                {
                    if (M[x][y] != 1)
                    {
                        DetMat = true;
                        break;
                    }
                }
                else
                {
                    if (M[x][y] != 0)
                    {
                        DetMat = true;
                        break;
                    }
                }
            }
        }
    }
    else
    {
        DetMat = true;
    }

    if (DetMat == false)
        cout << "Matriks ini adalah matriks satuan.\n";
    else
        cout << "Matriks ini bukan matriks satuan.\n";

    return 0;
}