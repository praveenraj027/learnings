#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans[i] *= arr[j];
            }
        }
    }
    cout << "[" ;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ", ";
    }
    cout << "]" ;
};
