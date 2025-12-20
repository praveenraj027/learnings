#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> s;
    s.push(12);
    s.push(1);
    s.push(2);
    s.push(58);
    s.push(41);
    s.push(52);
    s.push(87);
    s.pop();
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
