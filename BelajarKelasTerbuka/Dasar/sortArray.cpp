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
    system("cls");
    array<int, arraySize> angka = {9, 1, 8, 2, 7, 3, 6, 4, 5, 0};
    array<char, arraySize> huruf = {'a', 'c', 'b', 'd', 'h', 'g', 'f', 'l', 'k', 'j'};
    printArray(angka);
    printArray(huruf);

    sort(angka.begin(), angka.end());
    sort(huruf.begin(), huruf.end());
    printArray(angka);
    printArray(huruf);
}
