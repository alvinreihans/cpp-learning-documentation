#include <iostream>
using namespace std;
//prototipe
double inchToCm(double inch);
double cmToInch(double cm);

int main()
{
    //inisialisasi
    int calcType;
    double inch, cm;
    //algoritma
    cout << "Inch <=> Cm Calculator" << endl;
    cout << "Select operation" << endl //memilih jenis kalkulator
         << "cm to inch [1]   inch to Cm [2]" << endl;
    cin >> calcType;
    if (calcType == 1)
    {
        cout << "cm = ";
        cin >> cm;
        inch = cmToInch(cm);
        cout << cm << " cm = " << inch << " inch" << endl;
    }
    else if (calcType == 2)
    {
        cout << "inch = ";
        cin >> inch;
        cm = inchToCm(inch);
        cout << inch << " inch = " << cm << " cm" << endl;
    }
    else
    {
        cout << "Operation not found" << endl;
    }
    return 0;
}
//fungsi untuk mengubah inch menjadi cm
double inchToCm(double inch)
{
    double cm;
    return cm = inch * 2.54;
}
//fungsi untuk mengubah cm menjadi inchi
double cmToInch(double cm)
{
    double inch;
    return inch = cm * 0.393710;
}
