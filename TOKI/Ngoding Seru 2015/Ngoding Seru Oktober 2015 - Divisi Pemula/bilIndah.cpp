#include <iostream>
using namespace std;
int main()
{
    int S, N, D;
    cin >> S >> N >> D;

    if (1 <= S && S <= 2000 && 1 <= N && N <= 2000 && 1 <= D && D <= 20)
        for (int i = 0; i < N; i++)
        {
            cout << S + (D * i) << endl;
        }
    return 0;
}