#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {7, 1, 5, 1, 2, 6};
    int size = sizeof(arr) / sizeof(int);
    int maxProfit = 0, bestBuy = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > bestBuy){
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }

    cout << maxProfit;
};
