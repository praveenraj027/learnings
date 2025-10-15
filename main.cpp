#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 1, 1, 4, 5};
    int n = vec.size();
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[i] == vec[j])
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << vec[i];
            break;
        }
    }
};
