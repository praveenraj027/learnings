#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7};
   if (arr.size() == 1)
   {
      cout << arr[0];
      return 0;
   };
   int st = 0, end = arr.size() - 1;
   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (mid == 0 && arr[0] != arr[mid + 1])
      {
         cout << arr[mid];
         break;
      };
      if (mid == end && arr[end] != arr[mid - 1])
      {
         cout << arr[mid];
         break;
      };
      if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
      {
         cout << arr[mid];
         break;
      }
      if (mid % 2 == 0)
      {
         if (arr[mid - 1] == arr[mid])
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
         if (arr[mid - 1] == arr[mid])
         {
            st = mid + 1;
         }
         else
         {
            end = mid - 1;
         }
      }
   }
};
