#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> DNFalgo(vector<int> &arr, int n)
{
   int mid = 0, low = 0, high = arr.size() - 1;
   while (high >= mid)
   {
      if (arr[mid] == 0)
      {
         swap(arr[mid], arr[low]);
         low++;
         mid++;
      }
      else if (arr[mid] == 1)
      {
         mid++;
      }
      else
      {
         swap(arr[mid], arr[high]);
         high--;
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
   vector<int> arr = {0, 2, 1, 2, 1, 0, 1};
   int n = arr.size();
   DNFalgo(arr, n);
   printArr(arr, n);
};
