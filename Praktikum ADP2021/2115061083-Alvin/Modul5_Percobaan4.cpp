#include <iostream>
using namespace std;
int main()
{
    int price;
    int avg_price;
    int numberOfPrices = 0;
    int total_price = 0;

    cout << "Program Menghitung Rata-Rata Harga Saham" << endl;
    cout << "========================================" << endl;
    cout << "Enter price : ";
    cin >> price;
    cout << endl;

    while (price >= 0)
    {
        numberOfPrices++;
        total_price = total_price + price;
        cout << "Enter price : ";
        cin >> price;
        cout << endl;
    }

    if (numberOfPrices > 0)
    {
        avg_price = total_price / numberOfPrices;
        cout << "Average price : " << avg_price << endl;
    }
    else
    {
        cout << "No stock prices entered" << endl;
    }
    return 0;
}
