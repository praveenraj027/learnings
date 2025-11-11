    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int diagonalSum(int matrix[][3], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += matrix[i][i];
            if (i != n - 1 - i)
            {
                sum += matrix[i][n - 1 - i];
            }
        }
        return sum;
    }

    int main()
    {
        int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int n = 3;
        cout << diagonalSum(matrix, n) << endl;
    }
