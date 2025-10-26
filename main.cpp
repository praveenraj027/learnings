#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> arr = {1, 2, 1};
   int st = 1, end = arr.size() - 2;
   bool found = false;
   while (st <= end)
   {
      int mid = st + (end - st) / 2;
      if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
      {
         cout << "Peak index of element in array is: " << mid;
         found = true;
         break;
      }
      else if (arr[mid - 1] < arr[mid])
      {
         st = mid + 1;
      }
      else
      {
         end = mid - 1;
      }
   }
   if (!found){
      cout << "Element doesn't exist." << endl;
   }
};
