#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 2, 2, 5};
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans == arr[i])
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "There is no majority element in the array" << endl;
    }

    // cout << ans << endl;
};
