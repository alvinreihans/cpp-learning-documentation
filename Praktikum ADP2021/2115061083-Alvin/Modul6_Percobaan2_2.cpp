#include <iostream>
using namespace std;
int main()
{
    float sales, commision;
    float commision_rt = 0.2;

    cout << "Enter the sales :";
    cin >> sales;
    do
    {
        commision = sales * commision_rt;
        cout << "commision : " << commision << endl;
        cout << "Enter the sales :";
        cin >> sales;
    } while (sales != -1);
    return 0;
}
