#include <iostream>
using namespace std;

int productOfArray(int array[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= array[i];
    }
    cout << product;
};

int main()
{
    int array[5] = {1, 2, 3, 4, 10};
    int size = sizeof(array) / sizeof(int);
    productOfArray(array, size);
    cout << endl;
};