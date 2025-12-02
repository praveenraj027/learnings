#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st - 1, pivot = arr[end];

    for(int j = st; j < end; j++){
        if(arr[j] >= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if(st < end){
        int pvtIdx = partition(arr, st, end);

        quickSort(arr, st, pvtIdx - 1); //leftcall
        quickSort(arr, pvtIdx + 1, end); //rightcall
    }
}

int main()
{
    vector<int> arr = {45, 445, 1, 846, 48, 3};
    quickSort(arr, 0, arr.size() - 1);

    for (int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
