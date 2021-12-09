#include <iostream>
using namespace std;
int main()
{
    int income, sum, month = 1;
    while (month <= 10)
    {
        cout << "Pemasukan bulan ke-" << month << " : ";
        cin >> income;
        sum += income;
    }
    return 0;
}