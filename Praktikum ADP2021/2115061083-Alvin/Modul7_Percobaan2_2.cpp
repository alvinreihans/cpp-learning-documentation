#include <iostream>
#include <cmath>
using namespace std;

double calcSisiMiring(double sisiA, double sisiB);

int main()
{
    double A, B, C;
    cout << "Panjang sisi A: ";
    cin >> A;
    cout << "Panjang sisi B: ";
    cin >> B;
    C = calcSisiMiring(A, B);
    cout << "Panjang sisi miring: " << C << endl;
    return 0;
}

double calcSisiMiring(double sisiA, double sisiB)
{
    double sisiMiring = 0.0;
    sisiMiring = sqrt(pow(sisiA, 2) + pow(sisiB, 2));
    return sisiMiring;
}
