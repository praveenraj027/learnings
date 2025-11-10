#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int reverseNum(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int digits = n % 10;
        revNum = (revNum * 10) + digits;

        n = n / 10;
    }
    cout << revNum << endl;
}

int main()
{
    int n = 5423;
    reverseNum(n);
}
