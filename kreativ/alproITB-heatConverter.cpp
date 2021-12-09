#include <iostream>
using namespace std;

int main()
{
    string dari, ke;
    float input;

    cout << "Heat Converter" << endl;
    cout << "Ubah dari : ";
    cin >> dari;
    if (dari == "fahrenheit" || "Fahrenheit" || "celcius"  || "Celcius" || "Reamur" || "reamur")
    {
        cout << "Ubah dari " << dari << " ke : ";
        cin >> ke;
        if (ke == "fahrenheit" || "Fahrenheit" || "celcius"  || "Celcius" || "Reamur" || "reamur")
        {
            cout << "OK. Mengubah dari " << dari << " ke " << ke << "." << endl << "Masukkan nilai suhu di " << dari << endl;
            cin >> input;
            cout << "Menghitung" << endl;
            
            if (dari == "fahrenheit" || "Fahrenheit")
            {
                if (ke == "celcius"  || "Celcius")
                {
                input = (input-32)*5/9;
                }
                else if (ke == "Reamur" || "reamur")
                {
                    input = (input-32)*4/9;
                }
            }
    
            cout << "Suhu saat ini adalah " << input << " derajat " << ke << "." <<endl;
        }
        else
        {
           cout << "Maaf, " << ke << " bukanlah satuan suhu." << endl; 
        }
    }
    else
    {
        cout << "Maaf, " << dari << " bukanlah satuan suhu." << endl;
    }
}