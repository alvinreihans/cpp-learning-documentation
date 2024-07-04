#include <iostream>
using namespace std;
int main()
{
    int N, K, bonusN;
    cin >> N >> K;
    bonusN = N % 2;

    N *= K;

    K = N % 29101992;
    cout << K;
    return 0;
}