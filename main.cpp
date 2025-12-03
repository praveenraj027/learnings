#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int power(int a, int b)
{
    if(b == 0) return 1;

    return a * power(a, b - 1);

}

int main()
{
    cout << power(6, 3);
}
