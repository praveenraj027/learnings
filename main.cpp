#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> merge(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
   int index = m + n - 1, i = m - 1, j = n - 1;
   while (i >= 0 && j >= 0)
   {
      if (arr1[i] > arr2[j])
      {
         arr1[index] = arr1[i];
         index--;
         i--;
      }
      else
      {
         arr1[index] = arr2[j];
         index--;
         j--;
      }
   }
   while (j >= 0)
   {
      arr1[index] = arr2[j];
      index--;
      j--;
   }
   return arr1;
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
   vector<int> arr1 = {1, 2, 3, 0, 0, 0};
   int m = 3;
   vector<int> arr2 = {2, 4, 5};
   int n = arr2.size();
   merge(arr1, m, arr2, n);
   printArr(arr1, m + n);
};
