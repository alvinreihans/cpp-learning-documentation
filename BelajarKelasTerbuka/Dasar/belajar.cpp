#include <iostream>
using namespace std;
int main()
{
    // KAMUS
    int userInput, i, jumlah;
    // ALGORITMA
    cout << "masukkan nilai : ";
    cin >> userInput;
    jumlah = 0;
    for (i = 1; i <= userInput; i++)
    {
        cout << i << endl;
        jumlah += i;
    }

    cout << "jumlah bilangan diatas adalah : " << jumlah << endl; //Terminasi
    return 0;
}