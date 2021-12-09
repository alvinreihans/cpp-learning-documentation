#include <iostream>
using namespace std;

int main() {
    int ayam, i;
    
    cout << "Ada berapa anak ayam?" << endl;
    cin >> ayam;
    if(ayam >= 1) {
        cout << "Anak ayam turunlah " << ayam << endl;
        ayam--;
        for (i = ayam; i > 0; i--) {
            cout << "Mati satu tinggallah " << i << endl;
        }
        cout << "Mati satu tinggal induknya" << endl;
    } else {
        cout << "Hanya ada induk ayam" << endl;
    }
}