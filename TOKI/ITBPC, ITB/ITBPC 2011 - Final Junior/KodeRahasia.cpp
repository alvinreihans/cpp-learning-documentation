#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    string S, T;
    cin.getline(S, sizeof(S));
    cin.getline(T, sizeof(T));
    for (int i = 0; i < 4; i++)
    {
        if (isalpha(S[i]))
        {
            cout << "Huruf Semua";
        }
        else
        {
            cout << "Ada angka atau simbol";
        }
    }
    return 0;
}