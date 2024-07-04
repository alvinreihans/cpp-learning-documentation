#include <iostream>
#include <string>
using namespace std;

int main()
{
    int K, A;
    char C;

    cin >> K;
    cin >> C;
    cin >> A;

    if (isalpha(C))
    {
        if (2 <= K && K <= 100 && 0 <= A && A <= 9 && 97 <= char(C) && char(C) <= 122)
        {
            cout << A;
            for (int i = 0; i < (K - 2); i++)
            {
                cout << C;
            }
            cout << A << endl;
            for (int i = 1; i <= (K - 2); i++)
            {
                cout << C;
                for (int i = 0; i < (K - 2); i++)
                {
                    cout << A;
                }
                cout << C << endl;
            }
            cout << A;
            for (int i = 0; i < (K - 2); i++)
            {
                cout << C;
            }
            cout << A;
        }
    }
}