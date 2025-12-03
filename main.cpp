#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countInversion(vector<int>& nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++){
        for (int j = i; j < nums.size(); j++){
            if (i < j && nums[i] > nums[j]){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {6, 3, 5, 2, 7};
    cout << countInversion(arr);
}
