#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumDig(int n)
{
    if (n < 10)
        return n;
    return n % 10 + sumDig(n / 10);
}

int main()
{
    cout << sumDig(532);
}
