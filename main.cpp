#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    long long a = 0, b = 1, nextTerm;
    if (n == 1){cout << 0 << endl; return 0;};
    if (n == 2){cout << 1 << endl; return 0;};

    for (int i = 3; i <= n; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << b << endl;
    return 0;
};