#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int linear2D(int matrix[][3], int rows, int columns)
{
    int maxRowSum = 0;
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < columns; j++)
        {
            rowSum += matrix[i][j];
        }
        maxRowSum = max(rowSum, maxRowSum);
    }

    cout << maxRowSum << endl;
}

int main()
{
    int matrix[4][3] = {{1, 2, 31}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;
    linear2D(matrix, rows, columns);
}
