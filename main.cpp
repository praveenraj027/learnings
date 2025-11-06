#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string removeAllOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << s << endl;
}
int main()
{
    string str = "baabcbabc";
    string part = "ab";
    removeAllOccurrences(str, part);
}
