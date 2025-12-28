#include <iostream>
#include <deque>
using namespace std;

class CircularQueue
{
    int *arr;
    int currSize, cap;
    int f, rear;

public:
    CircularQueue(int size)
    {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        rear = -1;
    }

    void push(int data)
    {
        if (currSize == cap)
        {
            cout << "Queue is full.." << endl;
            return;
        }
        rear = (rear + 1) % cap;
        arr[rear] = data;
        currSize++;
    }

    void pop()
    {
        if (currSize == 0)
        {
            cout << "Queue is empty.." << endl;
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    int front()
    {
        if (currSize == 0)
        {
            cout << "Queue is empty.." << endl;
            return 0;
        }

        return arr[f];
    }

    bool empty()
    {
        return currSize == 0;
    }
};

int main()
{
    CircularQueue cq(5);
    cq.push(2);
    cq.push(21);
    cq.push(54);
    cq.push(12);
    while (!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    return 0;
}
