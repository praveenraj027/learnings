#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
    return sum;
};
int main()
{
    sum(2, 3);

    return 0;
};