#include <iostream>
using namespace std;

int main () {
    int r, a, vhasil;
    cin >> r;
    cin >> a;
    HITUNG_V (r, a, &vhasil);
    cout << vhasil << endl;
    return 0;
}
void HITUNG_V (int R1, int A1, int *V1) {
    *V1 = R1 * A1;
}