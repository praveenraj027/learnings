#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int reverseNum(int n)
{
    int revNum = 0;
    int temp = n;
    while (n != 0)
    {
        int digits = n % 10;
        revNum = (revNum * 10) + digits;

        n = n / 10;
    }
    if (revNum == temp)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;
    }
}

int main()
{
    int n = 323;
    reverseNum(n);
}
