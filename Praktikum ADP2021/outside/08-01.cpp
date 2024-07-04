#include <iostream>

using namespace std;

int main()
{
    float sales, commission;
    float commissionrate = 0.2;

    cout << "Enter the sales : ";
    cin >> sales;
    while (sales != -1)
    {
        commission = sales * commissionrate;
        cout << "commission = " << commission << endl;
        cout << "Enter the sales : ";
        cin >> sales;
    }
    return 0;
}