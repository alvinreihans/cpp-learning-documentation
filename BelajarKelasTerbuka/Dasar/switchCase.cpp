#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "masukkan nilai ";
    cin >> a;

    switch (a)
    {
    case 5:
        cout << "nilai benar 5" << endl;
    case 4:
        cout << "nilai benar 4" << endl;
        break; //berak untuk keluar dari rangkaian switch
    case 3:
        cout << "nilai benar 3" << endl;
    case 2:
        cout << "nilai benar 2" << endl;
    case 1:
        cout << "nilai benar 1" << endl;
    default:
        cout << "nilai tidak ada" << endl;
    }

    return 0;
}