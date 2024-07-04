#include <iostream>
using namespace std;

union nama
{
    int int_value;
    char char_value[4];
};

int main()
{
    system("cls");

    nama nama;

    nama.int_value = 12345642;

    cout << "data a :" << nama.int_value << endl;
    cout << "data b :" << nama.char_value[0] << endl;

    nama.char_value[0] = 'a';
    nama.char_value[1] = 'b';
    nama.char_value[2] = 'c';
    nama.char_value[3] = 'd';

    cout << "data a :" << nama.int_value << endl;
    cout << "data b :" << nama.char_value << endl;
    return 0;
}