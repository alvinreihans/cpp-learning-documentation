#include <iostream>
using namespace std;

int main() {
	int hargaBuku;
	int hargaAkhir;
	int uangBayar;
	int kembali;
	int diskon;

	cout << "Masukkan harga buku" << endl;
	cin >> hargaBuku;
	cout << "Masukkan besar uang yang diberikan" << endl;
	cin >> uangBayar;
	if ((hargaBuku >= 100000) && (hargaBuku < 150000)) {
		hargaAkhir = hargaBuku * 95 / 100;
		diskon = 100-95;
	}
	else if ((hargaBuku >= 150000) && (hargaBuku <= 250000)) {
		hargaAkhir = hargaBuku * 93 / 100;
		diskon = 100-93;
	}
	else if (hargaBuku >= 250000) {
		hargaAkhir = hargaBuku * 90 / 100;
		diskon = 100-90;
	}
	else {
		hargaAkhir = hargaBuku;
	}

	kembali = uangBayar - hargaAkhir;
	cout << "anda mendapatkan diskon sebesar : " << diskon << "%" << endl;
	cout << "kembalian anda sebesar : " << kembali;
}