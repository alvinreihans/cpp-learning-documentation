/*Buatlah program yang membandingkan 2 buah bilangan yang
di-input oleh user. Pada layar akan ditampilkan nilai yang lebih
besar. Jika input sama, maka akan ditampilkan “bilangan
sama”*/

/*Buatlah perbandingan 3 buah bilangan. Pada layar akan
ditampilkan nilai yang paling besar. Jika input sama, maka 
akan ditampilkan “bilangan sama”*/

/*Gunakan fungsi untuk membuat program 1 dan 2 dalam satu 
program baru. Nama fungsi Bandingkan*/

#include <iostream>
using namespace std;

float bandingkan(float a, float b, float c)
{
	float terkecil = a;

	if (b < terkecil)
	{
		terkecil = b;
	}
	else if (c < terkecil)
	{
		terkecil = c;
	}

	//Menentukan nilai terbesar
	float terbesar = a;

	if (b > terbesar)
	{
		terbesar = b;
	}
	else if (c > terbesar)
	{
		terbesar = c;
	}

	cout << "Nilai Terkecil adalah " << terkecil << endl;
	cout << "Nilai Terbesar adalah " << terbesar << endl;

	return 0;
}

int main()
{

	//kamus
	float inpt1, inpt2, inpt3;
	//rumus
	cout << "masukan angka pertama : ";
	cin >> inpt1;
	cout << endl;
	cout << "masukan angka kedua : ";
	cin >> inpt2;
	cout << endl;
	cout << "masukan angka ketiga : ";
	cin >> inpt3;
	cout << endl;

	cout << bandingkan(inpt1, inpt2, inpt3) << endl;
}