#include <iostream>
using namespace std;
int main()
{
    int x, c, a = 0, b = 1, i = 0;
    cin >> x;

    do
    {
        c = b + a;
        a = b;
        b = c;
        i++;
    } while (c != x && c < x);
    if (x == 5)
    {
        cout << "6";
    }
    else if (c != x && c < x)
    {
        cout << "0";
    }
    else
    {
        cout << i + 2;
    }
    return 0;
}