#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
   int target = 2;
   int n = arr.size();
   int st = 0, end = n - 1;
   bool found = false;
   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (arr[mid] == target)
      {
         cout << mid << endl;
         found = true;
      }
      if (arr[st] <= arr[mid])
      {
         if (arr[st] <= target && target <= arr[mid])
         {
            end = mid - 1;
         }
         else
         {
            st = mid + 1;
         }
      }
      else
      {
         if (arr[mid] <= target && target <= arr[end])
         {
            st = mid + 1;
         }
         else
         {
            end = mid - 1;
         }
      }
   }

   if (!found){
      cout << "Element doesn't exist." << endl;
   }
};
