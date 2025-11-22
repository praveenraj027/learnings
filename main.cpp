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
    printSubsets(nums, ans, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    printSubsets(arr, ans, 0);
    return 0;
}
