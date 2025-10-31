#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> selectionSort(vector<int> &arr, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      int smallest = i;
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[smallest])
         {
            smallest = j;
         }
      }
      swap(arr[i], arr[smallest]);
   }
   return arr;
}
void printArr(vector<int> arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

int main()
{
   vector<int> arr = {7, 8, 2, 1, 3};
   int n = arr.size();
   selectionSort(arr, n);
   printArr(arr, n);
};
