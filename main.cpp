#include <iostream>
using namespace std;

int main()
{
    int n = 14512;
    int rem, revNum = 0;
    while (n > 0)
    {
        rem = n % 10;
        revNum = revNum * 10 + rem;
        n = n / 10;
    }
    cout << revNum;
    return 0;
};