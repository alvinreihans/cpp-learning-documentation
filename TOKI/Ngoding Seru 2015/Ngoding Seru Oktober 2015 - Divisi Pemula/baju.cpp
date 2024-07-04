#include <iostream>
using namespace std;
int main()
{
    double B, P, L;

    cin >> B >> P >> L;
    if (1 <= B <= 200 && 1 <= P <= 200 && 1 <= L <= 200)
    {
        if (B <= 10 && P <= 40 && L <= 90)
        {
            cout << "S";
        }
        else if (B <= 14 && P <= 60 && L <= 120)
        {
            cout << "M";
        }
        else if (B <= 18 && P <= 80 && L <= 180)
        {
            cout << "L";
        }
        else
        {
            cout << "X";
        }
    }
    return 0;
}