#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    int count = 0;
    getline(std::cin, word);
    if (word[0] == 'h' || word[0] == 'H')
    {
        count++;
    }
    if (word[1] == 'a' || word[1] == 'A')
    {
        count++;
    }
    if (word[2] == 'l' || word[2] == 'L')
    {
        count++;
    }
    if (word[3] == 'o' || word[3] == 'O')
    {
        count++;
    }
    if (word[4] == ' ')
    {
        count++;
    }
    if (word[5] == 'd' || word[5] == 'D')
    {
        count++;
    }
    if (word[6] == 'u' || word[6] == 'U')
    {
        count++;
    }
    if (word[7] == 'n' || word[7] == 'N')
    {
        count++;
    }
    if (word[8] == 'i' || word[8] == 'I')
    {
        count++;
    }
    if (word[9] == 'a' || word[9] == 'A')
    {
        count++;
    }

    cout << count;
    return 0;
}