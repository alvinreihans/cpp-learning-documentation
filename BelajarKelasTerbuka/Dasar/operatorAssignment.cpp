#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    //operator
    a = a + 2;
    cout << a << endl;

    //assignmentOperator
    // a = a + 2
    a += 2;
    cout << a << endl;

    // a = a - 2
    a -= 2;
    cout << a << endl;

    //a = a / 2
    a /= 2;
    cout << a << endl;

    //a = a * 2
    a *= 2;
    cout << a << endl;

    //a = a % 2
    a %= 2;
    cout << a << endl;
    cout << endl;
    cout << "post-increment" << endl;
    int b = 10;
    //incrementOperator
    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;

    cout << "pre-increment" << endl;
    int c = 10;
    cout << c << endl;
    cout << ++c << endl;
    cout << c << endl;
}