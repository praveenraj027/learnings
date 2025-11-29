#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    int i = st, j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);      // left
        mergeSort(arr, mid + 1, end); // right

        merge(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {46, 12, 6546, 54, 84, 132, 54};
    mergeSort(arr, 0, arr.size());

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
