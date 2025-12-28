#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(12);
    dq.push_back(22);
    dq.push_front(45);
    dq.push_front(13);
    cout << dq.front() << " " << dq.back() << endl;
    return 0;
}
