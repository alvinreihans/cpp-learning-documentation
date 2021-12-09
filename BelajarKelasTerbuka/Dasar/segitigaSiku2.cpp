#include <iostream>
using namespace std;

int main()
{
    int input, output;
    int count = 0;
    cout << "Banyak baris segitiga : ";
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (count <= 9)
            {
                count++;
            }
            if (count > 9)
            {
                count = 0;
            }
            cout << count;
        }
        cout << endl;
    }
}