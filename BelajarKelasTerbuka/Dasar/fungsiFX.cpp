#include <iostream>
using namespace std;

//satu input
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

//dua input
int tambah(int x, int y)
{
    int cOut;
    cOut = x + y;
    return cOut;
}

int main()
{
    int hasil, input, r, t, u;
    cout << "Masukkan nilai" << endl;
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;

    cout << "Masukkan nilai awal" << endl;
    cin >> r;
    cout << r << " + ?" << endl;
    cin >> t;
    cout << r << " + " << t << endl;

    u = tambah(r, t);

    cout << r << " + " << t << " = " << u << endl;

    return 0;
}