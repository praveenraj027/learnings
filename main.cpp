#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> bubbleSort(vector<int> arr, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = 0; j < n - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
         }
      }
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
   vector<int> arr = {1, 2, 4, 8, 9};
   int n = arr.size();
   bubbleSort(arr, n);
   printArr(arr, n);
};
