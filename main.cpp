#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
};
int main()
{
    int n = 8, r = 2;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n - r);

    int nCr = fact_n / (fact_r * fact_nr);
    cout << "Value of nCr is: " << nCr << endl;
    return 0;
};