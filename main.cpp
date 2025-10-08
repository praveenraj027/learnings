#include <iostream>
using namespace std;

int sumN(int n)
{
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    };
    cout << "Sum from 1 to given number is: " << sum << endl;
};
int main()
{
    sumN(3);
    return 0;
};