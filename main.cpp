#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Search in a 2D Matrix II

bool searchIn2D(vector<vector<int>> matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int r = 0, c = n - 1;
    while (c >= 0 && r < m)
    {
        if (target == matrix[r][c])
        {
            return true;
        }
        else if (target <= matrix[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int target = 8;
    if (searchIn2D(matrix, target))
    {
        cout << "Target found" << endl;
    }
    else
    {
        cout << "Target doesn't exist" << endl;
    };
}
