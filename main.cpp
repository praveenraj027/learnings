#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {6, 8, 0, 1, 3};
    stack<int> s;
    vector<int> ans(nums.size());

    for (int i = 0; i < nums.size(); i++){
        while(s.size() > 0 && s.top() >= nums[i]){
            s.pop();
        }
        if (s.empty()) {
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(nums[i]);
    }

    for (int val : ans){
        cout << val << " ";
    }
    return 0;
}
