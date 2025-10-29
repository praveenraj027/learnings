#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxTime)
{
   int painter = 1, time = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > maxTime)
      {
         return false;
      }
      if (time + arr[i] <= maxTime)
      {
         time += arr[i];
      }
      else
      {
         painter++;
         time = arr[i];
      }
   }

   return painter > m ? false : true;
}

int painterPartition(vector<int> &arr, int n, int m)
{
   int sum = 0;
   int max = 0;
   for (int i = 0; i < arr.size(); i++)
   {
      sum += arr[i];
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }
   int st = max, end = sum;
   int ans = -1;

   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (isValid(arr, n, m, mid))
      {
         ans = mid;
         end = mid - 1;
      }
      else
      {
         st = mid + 1;
      }
   }
   return ans;
}

int main()
{
   vector<int> arr = {5, 10, 5, 20};
   int n = arr.size(), m = 2;
   if (m > n)
   {
      cout << "It is not possible." << endl;
      return 0;
   }
   cout << painterPartition(arr, n, m) << endl;
};
