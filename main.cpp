#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int minAllowedDist)
{
   int cows = 1, lastPosition = arr[0];
   for (int i = 0; i < arr.size(); i++)
   {
      if (arr[i] - lastPosition >= minAllowedDist)
      {
         cows++;
         lastPosition = arr[i];
      }
      if (cows == m)
      {
         return true;
      }
   }
   return false;
}

int aggressiveCows(vector<int> arr, int n, int m)
{
   sort(arr.begin(), arr.end());
   int min = arr[0], max = arr[arr.size() - 1];
   int st = 1, end = max - min, ans = -1;

   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (isPossible(arr, n, m, mid))
      {
         ans = mid;
         st = mid + 1;
      }
      else
      {
         end = mid - 1;
      }
   }
   return ans;
}

int main()
{
   vector<int> arr = {1, 2, 4, 8, 9};
   int n = arr.size(), m = 2;

   cout << aggressiveCows(arr, n, m) << endl;
};
