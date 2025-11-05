#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
   char str[] = "Piya";
   int st = 0, end = strlen(str) - 1;
   while (st < end){
      swap(str[st], str[end]);
      st++;
      end--;
   }
   for (char val : str){
      cout << val << " ";
   }
};
