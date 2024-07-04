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

struct gizi
{
    float vitaminB;
    float vitaminC;
    float kalsium;
};

int main()
{
    system("cls");
    buah apel, jeruk;
    jeruk.warna = "oranye";
    jeruk.berat = 1;
    jeruk.harga = 5000;
    jeruk.rasa = "asam";

    return 0;
}