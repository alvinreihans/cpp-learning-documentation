#include <iostream>
using namespace std;
int main()
{
    cout << "Minutes   Seconds" << endl;
    for (int minutes = 0; minutes < 2; minutes += 1)
    {
        for (int seconds = 0; seconds < 3; seconds += 1)
        {
            cout
                << "   " << minutes << "        " << seconds << endl;
        }
        cout << endl;
    }
    return 0;
}
