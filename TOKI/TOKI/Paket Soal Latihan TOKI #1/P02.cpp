#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b;
    char op;

    cin >> a >> op >> b;
    cout << int('43');
    if (-10000 <= a && a <= 10000 && -10000 <= b && b <= 10000)
    {
        if (op == int('43'))
        {
            cout << a << " " << op << " " << b << endl;
        }
    }
}