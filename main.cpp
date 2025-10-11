#include <iostream>
using namespace std;

void unique(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && array[i] == array[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << array[i] << " ";
        }
    }
}

int main()
{
    int array[6] = {1, 2, 3, 4, 2, 2};
    int size = sizeof(array) / sizeof(int);
    unique(array, size);
};