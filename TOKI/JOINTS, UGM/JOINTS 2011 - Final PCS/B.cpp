#include <iostream>
using namespace std;
int main()
{
    int N;
    char awal, akhir, word[4] = {'l', 'k', 'p', 'u'};
    cin >> N >> awal >> akhir;
    for (int i = 0; i < N; i++)
    {
        while (awal != akhir)
        {
            if (awal == 'l')
            {
                cout << " lho";
                awal = 'k' || awal == 'u';
            }
            else if (awal == 'k')
            {
                cout << " keren";
                awal == 'p' || awal == 'l';
            }
            else if (awal == 'u')
            {
                cout << "kul";
                awal == 'p';
            }
            else if (awal == 'p')
            {
                cout << "parah";
                awal == 'l';
            }
        }
    }

    return 0;
}