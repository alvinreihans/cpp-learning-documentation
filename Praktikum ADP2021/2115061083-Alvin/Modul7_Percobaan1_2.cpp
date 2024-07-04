#include <iostream>
using namespace std;
//function prototype
double calcCelsius(double tempF);
int main()
{
    double fahrenheit = 0.0;
    double celsius = 0.0;
    cout << "Enter Fahrenheit temperature: ";
    cin >> fahrenheit;
    celsius = calcCelsius(fahrenheit);
    cout << "Celsius temperature: " << celsius << endl;
    return 0;
} //end of main function
//*****function definitions*****
double calcCelsius(double tempF)
{
    double tempC = 0.0;
    tempC = 5.0 / 9.0 * (tempF - 32.0);
    return tempC;
} //end of calcCelsius function
