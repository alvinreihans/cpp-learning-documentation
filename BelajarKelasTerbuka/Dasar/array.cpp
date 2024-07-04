#include <iostream>
#include <array>
using namespace std;
int main()
{
    system("cls");
    // array<int, 5>
    //     nilai;

    // for (int i = 0; i <= 4; i++)
    // {
    //     nilai[i] = i;
    //     cout << "nilai[" << i << "] = " << nilai[i];
    //     cout << " dengan address : " << &nilai[i] << endl;
    // }

    // cout << endl
    //      << endl;
    // cout << "ukuran array\t: " << nilai.size() << endl;
    // cout << "address awal\t: " << nilai.begin() << endl;
    // cout << "address akhir\t: " << nilai.end() << endl;
    // cout << "nilai ke 2\t: " << nilai.at(2);

    array<int, 10> arrayNilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai)
    {
        cout << "address " << &nilai << " nilai " << nilai << endl;
    }

    cout << endl
         << endl;
    for (int &nilaiRef : arrayNilai)
    {
        cout << "address " << &nilaiRef << " nilai " << nilaiRef << endl;
    }
    return 0;
}