#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    int digitSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        digitSum += lastDigit;
    }
    cout << "Sum of digits of given number is: " << digitSum << endl;
};
int main()
{
    sumOfDigits(145);
    return 0;
};