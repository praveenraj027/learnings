#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool linear2D(int matrix[][3], int rows, int columns, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "Target " << target << " found in the 2d array at (" << i << ", " << j << ")" << endl;
                return 0;
            }
        }
    }
    cout << "Target doesn't exist in matrix" << endl;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;
    linear2D(matrix, rows, columns, 12);
}
