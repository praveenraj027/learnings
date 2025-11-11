#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> linear2D(int matrix[][3], int rows, int columns, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;
    pair<int, int> result = linear2D(matrix, rows, columns, 12);

    if (result.first != -1)
    {
        cout << "Target found at (" << result.first << ", " << result.second << ")" << endl;
    }
    else
    {
        cout << "Target doesn't exist" << endl;
    }
}
