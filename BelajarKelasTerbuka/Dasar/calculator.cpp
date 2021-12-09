#include <iostream>
using namespace std;
int main()
{
    double a, b, result;
    char ops;

    cout << "Input first value : ";
    cin >> a;
    cout << "Select Operation (+,-,*,/) : ";
    cin >> ops;
    cout << "Input second value : ";
    cin >> b;

    switch (ops)
    {
    case '+':
    {
        result = a + b;
        break;
    }
    case '-':
    {
        result = a - b;
        break;
    }
    case '*':
    {
        result = a * b;
        break;
    }
    case '/':
    {
        result = a / b;
        break;
    }
    }
    cout << "Result : " << result;
    return 0;
}