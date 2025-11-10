#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a =  a % b;
        }
        else 
        {
            b = b % a;
        }
    }
    if (a == 0) {
        cout << b << endl;
    }
    else 
    {
        cout << a << endl;
    }

}

int main()
{
    int a = 20, b = 28;
    gcd(a, b);
}
