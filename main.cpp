#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    int maxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int height = min(arr[i], arr[j]);
            int area = width * height;
            maxWater = max(maxWater, area);
        }
    }
    cout << maxWater;
};
