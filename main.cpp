#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, vector<string> &ans, string path)
{
    // Base case

    int n = maze.size();
    if (col < 0 || row < 0 || col >= n || row >= n || maze[row][col] == 0 || maze[row][col] == -1)
    {
        return;
    }
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }
    maze[row][col] = -1;

    // Down
    helper(maze, row + 1, col, ans, path + "D");
    // Up
    helper(maze, row - 1, col, ans, path + "U");
    // Right
    helper(maze, row, col + 1, ans, path + "R");
    // Left
    helper(maze, row, col - 1, ans, path + "L");

    maze[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> &maze)
{
    int n = maze.size();
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, ans, path);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 1, 0}, {0, 0, 1, 1}};
    vector<string> ans = findPath(maze);
    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}
