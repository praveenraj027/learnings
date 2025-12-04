#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countUpper(string s, int i)
{

    if (i == s.length())
        return 0;
    int count = 0;
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        count++;
    }

    return count + countUpper(s, i + 1);
}

int main()
{
    string s = "PraVeeN";
    cout << countUpper(s, 0);
}
