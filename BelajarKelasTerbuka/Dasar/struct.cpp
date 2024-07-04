#include <iostream>
#include <string>
using namespace std;

struct buah
{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main()
{
    system("cls");
    buah apel;
    apel.warna = "Hijau";
    cout << apel.warna << endl;
    cout << &apel.warna << endl;
    cout << apel.berat << endl;

    return 0;
}