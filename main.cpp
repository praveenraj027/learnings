#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseStr(string s, int left, int right)
{
    if (left >= right)
        return s;

    swap(s[left], s[right]);
    return reverseStr(s, left + 1, right - 1);
}

int main()
{
    string s = "praveen";
    cout << reverseStr(s, 0, s.length() - 1);
}
