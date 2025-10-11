#include <iostream>
using namespace std;

int main()
{
int array[5] = {12, 45, -92, 525, -3};
int min = 0;
int size = sizeof(array) / sizeof(int);
for (int i = 1; i <= size; i++){
    if(array[i] < array[min]){
        min = i;
    }
}
cout << min <<endl;
};