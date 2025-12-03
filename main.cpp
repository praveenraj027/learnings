#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countVowels(string s, int i)
{
    if (i == s.length())
        return 0;
    int count = 0;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        count++;
    }
    return count + countVowels(s, i + 1);
}
int main()
{
    string s = "praveen";
    cout << countVowels(s, 0);
}
