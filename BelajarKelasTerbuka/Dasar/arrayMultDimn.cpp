#include <iostream>
#include <array>
using namespace std;

const int kolom = 2;
const int baris = 2;

void printArray(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

void printArray2(array<array<int, kolom>, baris> &nilaiArray)
{
    for (array<int, kolom> vectorBaris : nilaiArray)
    {
        cout << "[ ";
        for (int nilaiKolom : vectorBaris)
        {
            cout << nilaiKolom << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{
    system("cls");
    int arrayMD[baris][kolom] = {1, 2, 3, 4};
    array<array<int, kolom>, baris> nilaiMD = {5, 6, 7, 8};

    printArray(*arrayMD, baris, kolom);
    printArray2(nilaiMD);
}