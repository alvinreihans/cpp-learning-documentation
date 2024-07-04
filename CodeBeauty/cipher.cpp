#include <iostream>
using namespace std;
int main()
{
    // english to ASCII cipher
    cout << "Enter 5 char words : ";
    char word[5];
    cin >> word[0] >> word[1] >> word[2] >> word[3] >> word[4];
    cout << "Word : " << word[0] << " " << word[1] << " " << word[2] << " " << word[3] << " " << word[4] << endl;
    cout << "ASCII : " << int(word[0]) << " " << int(word[1]) << " " << int(word[2]) << " " << int(word[3]) << " " << int(word[4]) << endl
         << endl;

    // ASCII to english cipher
    cout << "Enter ASCII code of 5 alphabets : ";
    int num[5];
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    cout << "ASCII : " << num[0] << " " << num[1] << " " << num[2] << " " << num[3] << " " << num[4] << endl;
    cout << "Word : " << char(num[0]) << " " << char(num[1]) << " " << char(num[2]) << " " << char(num[3]) << " " << char(num[4]) << endl;
    return 0;
}