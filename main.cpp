#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> insertionSort(vector<int> &arr, int n)
{
   for (int i = 1; i < n; i++)
   {
      int curr = arr[i];
      int prev = i - 1;
      while (prev >= 0 && arr[prev] > curr)
      {
         arr[prev + 1] = arr[prev];
         prev--;
      }
      arr[prev + 1] = curr;
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
   insertionSort(arr, n);
   printArr(arr, n);
};
