#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool gcd(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd << endl;
}

int main()
{
    int a = 20, b = 28;
    gcd(a, b);
}
