#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(int);
    int maxWater = 0;
    int lp = 0, rp = n - 1;
    while (lp < rp)
    {
        int w = rp - lp;
        int h = min(height[lp], height[rp]);
        int area = w * h;
        maxWater = max(area, maxWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    cout << maxWater;
};
