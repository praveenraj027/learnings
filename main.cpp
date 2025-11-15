#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
// Find Duplicate

int findDuplicate(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cout << nums[i] << endl;
                return 0;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    findDuplicate(arr);
}
