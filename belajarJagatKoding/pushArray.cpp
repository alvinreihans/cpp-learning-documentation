#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int max = 5;
    int top = -1;
    string keranjang[max];
    string lanjut;

    do
    {
        system("cls");
        if (top == max - 1)
        {
            cout << "keranjang penuh" << endl;
        }
        else
        {
            top++;
            cout << "Masukan isi : ";
            cin >> keranjang[top];
            cout << keranjang[top] << " berhasil ditambahkan kedalam keranjang" << endl;
        }
        cout << "================================================================" << endl;
        cout << "Isi keranjang saat ini : " << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << i + 1 << ". " << keranjang[i] << endl;
        }
        cout << "Lanjutkan? <y/t>";
        cin >> lanjut;
    } while (lanjut == "y");
    cout << "Program selesai";
}