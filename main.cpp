#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
// Find missing and number in matrix

vector<int> findRepeatedAndMissing(vector<vector<int>> grid)
{
    int n = grid.size();
    vector<int> ans;
    unordered_set<int> s;
    int a, b;
    int actualSum = 0, expectedSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    expectedSum = (n * n) * (n * n + 1) / 2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);
    return ans;
}
int main()
{
    vector<vector<int>> grid = {{1, 3, 4}, {2, 5, 8}, {7, 7, 9}};
    vector<int> ans = findRepeatedAndMissing(grid);
    for (int val : ans)
    {
        cout << val << " ";
    }
}
