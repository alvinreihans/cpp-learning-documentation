#include <iostream>
#include <fstream> // untuk memproses file
using namespace std;

int main()
{
    // ifstream
    ifstream myfile("ofstream.txt");
    string line, name;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << name << endl;
        }
        myfile.close();
    }
    else
    {
        cout << "Failed to open ofstream" << endl;
    }
}