#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int d;

    cin >> d;
    if (1 <= d && d <= 30000)
    {
        cout << ((d / 60) / 60) << endl
             << ((d / 60) % 60) << endl
             << ((d % 60) % 60);
    }
    return 0;
}