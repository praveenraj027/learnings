#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd'};
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (int dig : str)
            {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    cout << idx << endl;
    for (int i = 0; i < idx; i++)
    {
        cout << chars[i] << " ";
    }
}
