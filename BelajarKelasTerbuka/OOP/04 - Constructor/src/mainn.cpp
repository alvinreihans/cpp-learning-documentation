#include <iostream>
#include <string>
using namespace std;

// class constructor
class Polos
{
public:
    string dataString;
    int dataInteger;

    Polos(string inputString, int inputInteger)
    {
        Polos::dataString = inputString;
        Polos::dataInteger = inputInteger;
        cout << Polos::dataString << endl
             << Polos::dataInteger << endl
             << endl;
    }
};

int main()
{
    system("cls");

    Polos objectPolos1 = Polos("object", 10293847);
    Polos objectPolos2 = Polos("mamank", 1234567890);
    // Polos objectPolos;
    // objectPolos.dataString = "Polos";
    // objectPolos.dataInteger = 1029384;
    // cout << objectPolos.dataString << endl
    //      << objectPolos.dataInteger << endl;
    return 0;
}