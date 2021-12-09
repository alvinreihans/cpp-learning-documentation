#include <iostream>
#include <cstdlib> //mengandung fungsi random
using namespace std;

int main()
{
    char next;
    int groups;

    cout << "Banyak perserta : ";
    cin >> groups;

    cout << "Gacha nomor? (y/n): " << endl;
    cin >> next;
    while (true)
    {
        if (next == 'y')
        {
            cout << "Nomor terpilih adalah : " << 1 + (rand() % groups) << endl;
            cout << "Gacha nomor lagi? (y/n): " << endl;
            cin >> next;
            system("cls");
        }
        else if (next == 'n')
        {
            system("cls");
            break;
        }
        else
        {
            cout << "Input salah" << endl;
            cout << "Gacha nomor lagi? (y/n): " << endl;
            cin >> next;
            system("cls");
        }
    }
}