#include <iostream>
using namespace std;

int sumOfArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    cout << sum;
};

int main()
{
    int array[5] = {1, 2, 3, 4, 10};
    int size = sizeof(array) / sizeof(int);
    sumOfArray(array, size);
    cout << endl;
};