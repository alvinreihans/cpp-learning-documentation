#include <iostream>
using namespace std;

void fungsi(int *); // prototype

int main()
{
    int a = 5;
    cout << "address a : " << &a << endl;
    cout << "nilai a : " << a << endl;
    fungsi(&a);
    return 0;
}

void fungsi(int *b)
{
    cout << "address b :" << &b << endl;
    cout << "nilai b : " << *b << endl;
}