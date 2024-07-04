#include <iostream>
using namespace std;

int main() // WA?
{
    system("cls");
    int N;
    bool aman;
    cin >> N;
    int gerbong[N];

    if (1 <= N && N <= 100)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> gerbong[i];
            if (1 <= gerbong[i] && gerbong[i] <= 100)
            {
                aman = true;
            }
        }
    }
    if (aman == true)
    {
        for (int i = N - 1; i >= 0; i--)
        {
            cout << gerbong[i];
            if (i != 0)
            {
                cout << ",";
            }
        }
    }
}