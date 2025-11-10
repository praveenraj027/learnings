#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void printDigits(int n)
{
    while (n != 0)
    {
        int digits = n % 10;

        cout << digits << endl;
        n = n / 10;
    }
}

int main()
{
    int n = 3215;
    printDigits(n);
}
