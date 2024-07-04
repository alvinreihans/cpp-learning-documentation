#include <iostream>
using namespace std;
int main()
{
    int N, D;
    cin >> N >> D;
    long A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (A[1] > A[i])
        {
            if (A[1] - A[i] < D)
            {
                keluarga++;
            }
        }
    }
    return 0;
}