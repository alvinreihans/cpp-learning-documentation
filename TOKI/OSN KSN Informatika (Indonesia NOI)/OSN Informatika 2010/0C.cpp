#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    char type;
    cin >> type;
    if (type == 'C')
    {
        ifstream CPP("CPP.txt");
        if (CPP.is_open())
        {
            while (getline(CPP, line))
            {
                cout << line << endl;
            }
        }
    }
    else if (type == 'P')
    {
        ifstream PAS("PAS.txt");
        if (PAS.is_open())
        {
            while (getline(PAS, line))
            {
                cout << line << endl;
            }
        }
    }
    return 0;
}