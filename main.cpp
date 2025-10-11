#include <iostream>
using namespace std;

int minOfArray(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
};
int maxOfArray(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
};

int main()
{
    int array[5] = {1, 2, 3, 4, 10};
    int size = sizeof(array) / sizeof(int);
    int minVal = minOfArray(array, size);
    int maxVal = maxOfArray(array, size);
    int temp = minVal;
    minVal = maxVal;
    maxVal = temp;
    cout << "Minimum number is: " << minVal << endl;
    cout << "Maximum number is: " << maxVal;

};