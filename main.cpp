#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr1 = {-1, 0, 5, 6, 9, 74};
   int tar1 = 90;
   vector<int> arr2 = {1, 2, 4, 6, 89};
   int tar2 = 89;
   int n = arr2.size();

   int st = 0, end = n - 1;
   bool found = false;
   while (st <= end)
   {
      int mid = (st + end) / 2;
      if (tar2 > arr2[mid])
      {
         st = mid + 1;
      }
      else if (tar2 < arr2[mid])
      {
         end = mid - 1;
      }
      else
      {
         cout << arr2[mid];
         found = true;
         break;
      }
   }
   if (!found)
   {
      cout << "Element not found!" << endl;
   }
};
