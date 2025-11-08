#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abcdefghij";
    int k = 3;
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        int start = st;
        int e = min(start + k - 1, end);
        while (start < e)
        {
            swap(s[start], s[e]);
            start++;
            e--;
        }
        st += 2*k;
    }
    cout << s << endl;
}
