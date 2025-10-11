#include <iostream>
using namespace std;

int main()
{
int array[5] = {12, 45, 2, 45, -3};
int min = array[0];
int size = sizeof(array) / sizeof(int);
for (int i = 1; i <= size; i++){
    if(array[i] < min){
        min = array[i];
    }
}
cout << min <<endl;
};