#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int maxColSum(int matrix[][3], int rows, int columns)
{
    int maxColSum = 0;
    for (int i = 0; i < columns; i++)
    {
        int colSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colSum += matrix[j][i];
        }
        maxColSum = max(colSum, maxColSum);
    }

    cout << maxColSum << endl;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;
    maxColSum(matrix, rows, columns);
}
