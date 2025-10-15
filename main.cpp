#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << ans << endl;
};
