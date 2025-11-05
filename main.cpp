#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
   bool isPalindrome = false;
   string str = "naman";
   string reversedStr(str.rbegin(), str.rend());
   if (str == reversedStr)
   {
      isPalindrome = true;
   }
   cout << "The string is " << (isPalindrome ? "Palindrome" : "not a Palindrome");
};
