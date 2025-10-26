#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};
   int st = 1, end = arr.size() - 2;
   bool found = false;
   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
      {
         cout << arr[mid];
         break;
      }
      if (mid % 2 == 0)
      {
         if (arr[mid - 1] = arr[mid])
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
         if (arr[mid - 1] = arr[mid])
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
