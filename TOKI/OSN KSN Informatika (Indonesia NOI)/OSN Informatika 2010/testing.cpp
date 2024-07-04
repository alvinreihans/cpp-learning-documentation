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
        cout << c << endl;
    } while (i <= x - 3);
}