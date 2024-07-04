#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> v{2, 3, 7, 14, 23};
    for_each(v.begin(), v.end(), [](int x)
             { if (x%2==0) {cout << "genap" <<endl;
             }else {cout << "ganjil"<<endl;} });
    return 0;
}