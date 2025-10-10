#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    for (int num = 2; num <= n; num++)
    {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        };
        if (isPrime)
        {
            cout << num << endl;
        };
    };
    return 0;
};