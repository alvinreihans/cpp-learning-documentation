#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *A;
    int b = 10;

    A = &b;

    cout << A << " " << b << endl;
    cout << *A << " " << b << endl;
    b = 30;
    cout << *A << " " << b << endl;
}