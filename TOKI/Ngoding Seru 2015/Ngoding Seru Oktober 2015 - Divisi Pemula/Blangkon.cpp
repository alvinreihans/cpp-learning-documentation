#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int A, B, C;
    char K;

    cin >> A >> B >> C >> K;
    if (1 <= A && A <= 100 && 1 <= B && B <= 100 && 1 <= C && C <= 100 && (K == '1' || K == '0'))
    {
        switch (K)
        {
        case '0':
            if (A > B)
            {
                if (B > C)
                {
                    cout << A << " " << B << " " << C;
                }
                else if (C > A)
                {
                    cout << C << " " << A << " " << B;
                }
                else if (B == C)
                {
                    cout << A << " " << B << " " << C;
                }
                else
                {
                    cout << A << " " << C << " " << B;
                }
            }
            else if (B > A)
            {
                if (C > B)
                {
                    cout << C << " " << B << " " << A;
                }
                else if (A > C)
                {
                    cout << B << " " << A << " " << C;
                }
                else if (A == C)
                {
                    cout << B << " " << A << " " << C;
                }
                else
                {
                    cout << B << " " << C << " " << A;
                }
            }
            else
            {
                if (C > B)
                {
                    cout << C << " " << B << " " << A;
                }
                else if (B > C)
                {
                    cout << A << " " << B << " " << C;
                }
                else if (C == B)
                {
                    cout << B << " " << C << " " << A;
                }
            }
            break;
        case '1':
            if (A > B)
            {
                if (B > C)
                {
                    cout << C << " " << B << " " << A;
                }
                else if (C > A)
                {
                    cout << B << " " << A << " " << C;
                }
                else if (B == C)
                {
                    cout << C << " " << B << " " << A;
                }
                else
                {
                    cout << B << " " << C << " " << A;
                }
            }
            else if (B > A)
            {
                if (C > B)
                {
                    cout << A << " " << B << " " << C;
                }
                else if (A > C)
                {
                    cout << C << " " << A << " " << B;
                }
                else if (A == C)
                {
                    cout << C << " " << A << " " << B;
                }
                else
                {
                    cout << A << " " << C << " " << B;
                }
            }
            else
            {
                if (C > B)
                {
                    cout << A << " " << B << " " << C;
                }
                else if (B > C)
                {
                    cout << C << " " << B << " " << A;
                }
                else if (C == B)
                {
                    cout << A << " " << C << " " << B;
                }
            }
        }
    }
    return 0;
}