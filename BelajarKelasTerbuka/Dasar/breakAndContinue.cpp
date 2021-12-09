#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int b = 0;

    while (i <= 10)
    {
        i++;
        if (i == 5)
        {
            //break;
            continue;
        }
        cout << i << endl;
        }
}