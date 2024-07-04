#include <iostream>
using namespace std;
int main()
{
    int nama_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int jumlah;

    for (int i = 0; i < 10; i++)
    {
        jumlah = jumlah + nama_array[i];
    }
    cout << jumlah;
    return 0;
}