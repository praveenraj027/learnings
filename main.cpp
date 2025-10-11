#include <iostream>
using namespace std;

int main()
{
int array[5] = {12, 45, 2, 525, -3};
int max = 0;
int size = sizeof(array) / sizeof(int);
for (int i = 1; i <= size; i++){
    if(array[i] > array[max]){
        max = i;
    }
}
cout << max <<endl;
};