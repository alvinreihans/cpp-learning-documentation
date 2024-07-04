#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;
void printArray(array<int, arraySize> &angka)
{
    std::cout << "Array : ";
    for (int &a : angka)
    {
        cout << a << " ";
    }
    cout << endl;
}

void printArray(array<char, arraySize> &angka)
{
    std::cout << "Array : ";
    for (char &a : angka)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    int angkaCari = 5;
    bool ketemu = false;
    system("cls");
    array<int, arraySize>
        angka = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
    printArray(angka);
    cout << "Cari angka :";
    cin >> angkaCari;
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);
    if (ketemu)
    {
        cout << "Ketemu" << endl;
    }
}