#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    ofstream outNumbers;
    outNumbers.open("Data2.txt");
    if (outNumbers.is_open())
    {
        for (int x = 10; x < 26; x += 1)
        {
            outNumbers << x << '#' << pow(x, 2.0) << endl;
        }
        //end for
        outNumbers.close();
        cout << "Numbers saved in file." << endl;
    }
    else
    {
        cout << "Can't open the Data2.txt file."
             << endl;
    }
    //end if
    return 0;
}
