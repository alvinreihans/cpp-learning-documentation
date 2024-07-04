#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int P, Q, R, S;
    cin >> P >> Q;
    S = pow(P, 2) + pow(Q, 2) + 1;
    R = S % 4;
    if (R == 0)
    {
        cout << S / 4;
    }
    else
    {
        cout << -1;
    }
}