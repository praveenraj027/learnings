#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> nextPermutation(vector<int> &arr, int n)
{
   int pivot = -1;
   for (int i = n - 2; i >= 0; i--)
   {
      if (arr[i] < arr[i + 1])
      {
         pivot = i;
         break;
      }
   }
   if (pivot == -1)
   {
      reverse(arr.begin(), arr.end());
      return arr;
   }

   for (int i = n - 1; i > pivot; i--)
   {
      if (arr[i] > arr[pivot])
      {
         swap(arr[i], arr[pivot]);
         break;
      }
   }

   int i = pivot + 1, j = n - 1;
   while (i <= j)
   {
      swap(arr[i], arr[j]);
      i++;
      j--;
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
   vector<int> arr = {1, 2, 5, 4, 6};
   int n = arr.size();
   nextPermutation(arr, n);
   printArr(arr, n);
};
