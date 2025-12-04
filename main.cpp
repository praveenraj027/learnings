#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int> &arr, int i, int n){
    if (i == n - 1) return true;
    if (arr[i] >= arr[i + 1]){
        return false;
    }   
    return isSorted(arr, i + 1, n);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    if (isSorted(arr, 0, arr.size())){
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
}
