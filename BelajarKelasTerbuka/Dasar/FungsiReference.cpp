#include <iostream>
using namespace std;

void kuadrat(int &b)
{
    b *= b;
}

int main()
{
    int a = 5;
    cout << "address a : " << &a << endl;
    cout << "nilai a : " << a << endl;
    kuadrat(a); // setelah pemanggilan nilai a berubah
    cout << a;
    return 0;
}