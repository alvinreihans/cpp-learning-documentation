#include <iostream>
using namespace std;
int main()
{
    double fahrenheit = 0.0;
    double celsius = 0.0;
    cout << "Enter Fahrenheit temperature: ";
    cin >> fahrenheit;
    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    cout << "Celsius temperature: " << celsius << endl;
    return 0;
} //end of main function