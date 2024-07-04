//tugasAlpro
#include <iostream>
using namespace std;

int main() {
    int totalKuthuk;
    
    cout << "Ada berapa anak ayam? ";
    cin >> totalKuthuk;
    if (totalKuthuk >= 1) {
        cout << "Anak ayam turunlah " << totalKuthuk << endl;
        while (totalKuthuk > 1) {
            totalKuthuk--;
            cout << "Mati satu tinggallah " << totalKuthuk << endl;
        }
        cout << "Mati satu tinggal induknya" << endl;
    } else {
        cout << "Hanya ada induknya" << endl;
    }
}