#include <iostream>
using namespace std;

void intersectionOfArray(int array1[], int array2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++)
                {
                    if (array1[k] == array1[i])
                    {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted)
                {
                    cout << array1[i] << " ";
                }
            }
        }
    }
}

int main()
{
    int array1[6] = {1, 2, 3, 4, 2, 2};
    int size1 = sizeof(array1) / sizeof(int);
    int array2[6] = {1, 23, 5, 4, 2, 6};
    int size2 = sizeof(array2) / sizeof(int);
    intersectionOfArray(array1, array2, size1, size2);
};