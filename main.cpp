#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char target = 'b';
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd'};
    for (int i = 0; i < chars.size(); i++){
        if (chars[i] == target){
            chars.erase(chars.begin() + i);
        }
    }
    for (char ch : chars)
    {
        cout << ch << " ";
    }
    
}
