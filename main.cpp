#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
// Find Duplicate

int findDuplicate(vector<int> nums)
{
    unordered_set<int> s;
    for (int val : nums)
    {
        if (s.find(val) != s.end())
        {
            cout << val;
            return 0;
        }
        s.insert(val);
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    findDuplicate(arr);
}
