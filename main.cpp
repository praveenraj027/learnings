#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

void printSubsets(vector<int> &nums, vector<int> &ans, int i)
{
    if (i == nums.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(nums[i]);
    printSubsets(nums, ans, i + 1);
    ans.pop_back();
    int idx = i + 1;
    while (idx < nums.size() && nums[idx] == nums[idx - 1])
        idx++;
    printSubsets(nums, ans, idx);
}

int main()
{
    vector<int> arr = {1, 2, 2};
    sort(arr.begin(), arr.end());
    vector<int> ans;
    printSubsets(arr, ans, 0);
    return 0;
}
