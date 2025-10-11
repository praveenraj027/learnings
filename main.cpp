#include <iostream>
using namespace std;

void reverseArray(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    };
};

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    reverseArray(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
};