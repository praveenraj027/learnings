#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
// ThreeSome (3Sum) closest;
int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int bestSum = nums[0] + nums[1] + nums[2];
    int bestDiff = abs(bestSum - target);

    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            int diff = abs(sum - target);
            if (diff < bestDiff)
            {
                bestDiff = diff;
                bestSum = sum;
            }
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                cout << target << endl;
                return 0;
            }
        }
    }
    cout << bestSum << endl;
}

int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    threeSumClosest(arr, target);
}
