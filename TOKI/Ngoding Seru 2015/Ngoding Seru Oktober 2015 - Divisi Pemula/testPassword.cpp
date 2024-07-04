#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char pass[20];
    int strength, count = 0;
    cin >> pass;
    for (int i = 0; pass[i]; i++)
    {
        count++;
    }
    if (count >= 8)
    {
        for (int i = 0; i < count; i++)
            if (int(pass[i]) == 33 || int(pass[i]) == 63 || pass[i] == 95 || (pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
            {
                strength = 3;
            }
    }
    else if (count >= 12)
    {
        strength = 2;
        cout << "AgakKuat";
    }
    else
    {
        strength = 1;
        cout << "Lemah";
    }
    if (strength == 3)
    {
        cout << "Kuat";
    }
}