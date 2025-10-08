#include <iostream>
using namespace std;

int factN(int n)
{
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    };
    cout << "Factotial from 1 to given number is: " << fact << endl;
};
int main()
{
    factN(6);
    return 0;
};