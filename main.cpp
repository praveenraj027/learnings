#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    cout << n << " ";
    print(n - 1);
}

int main()
{
    print(4);
}
