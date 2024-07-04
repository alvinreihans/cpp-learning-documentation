#include <iostream>
using namespace std;

int falseinput()
{
    cout << endl
         << "----------------------menjalankan fungsi false input--------------------" << endl
         << endl;
    string confirm;
    int hasil = 2;
    while (hasil == 2)
    {
        cout << "Output salah" << endl;
        cout << "Ketik ya untuk mengulang dan tidak untuk menutup program" << endl;
        cin >> confirm;

        if (confirm == "ya")
        {
            hasil = 1;
            cout << "ya" << endl;
        }
        else if (confirm == "tidak")
        {
            hasil = 0;
            cout << "tidak" << endl;
        }
        else
        {
            hasil = 2;
        }
    }

    return hasil;
}

int main()
{
    int x;
    string confirm;
    system("cls");
    cout << "Apakah anda ingin mengulang?" << endl
         << "Ketika ya untuk mengulang dan tidak untuk menutup" << endl;

    cin >> confirm;

    if (confirm == "ya")
    {
        x = 1;
        cout << "X = 1" << endl;
    }
    else if (confirm == "tidak")
    {
        x = 0;
        cout << "X = 0" << endl;
    }
    else
    {
        x = falseinput();
    }

    cout << x;
    return 0;
}