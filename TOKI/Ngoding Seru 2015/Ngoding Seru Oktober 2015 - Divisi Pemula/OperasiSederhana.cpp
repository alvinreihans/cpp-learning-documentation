#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X >= 0 && Y >= 0)
    {
        cout << X + Y << endl;
        cout << X - Y << endl;
        cout << X * Y << endl;
        cout << X / Y << endl;
        cout << X % Y;
    }
}