#include <iostream>
#include <list>
using namespace std;

class Stack
{
    list<int> ll;
public:
    void push(int val)
    {
        ll.push_front(val);
    }

    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }
};

int main()
{
    Stack s;
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
