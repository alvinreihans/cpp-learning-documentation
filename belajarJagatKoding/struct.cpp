#include <iostream>
using namespace std;

struct nilai
{
    double mtk;
    double bin;
    double bing;
    double ipa;
};
int main()
{
    nilai alex;
    alex.mtk = 90;
    alex.bin = 80;
    alex.bing = 70;
    alex.ipa = 79;

    cout << "Nilai mtk: " << alex.mtk << endl;
    cout << "Nilai Bing: " << alex.bing << endl;
    cout << "Nilai ipa: " << alex.ipa << endl;
    cout << "Nilai bin: " << alex.bin << endl;
}