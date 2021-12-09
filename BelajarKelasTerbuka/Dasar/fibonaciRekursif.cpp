#include <iostream>
using namespace std;

int fibbonacci(int n);

int main()
{
    int input, hasil;

    cout << "mengitung fibbonaci ke ";
    cin >> input;
    hasil = fibbonacci(input);

    cout << "hasilnya adalah : ";
    cout << hasil << endl;
    return 0;
}

int fibbonacci(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        cout << "perhitungan ke " << n << endl;
        return fibbonacci(n - 1) + fibbonacci(n - 2);
    }
}