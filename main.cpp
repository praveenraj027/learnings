#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (empty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void dequeue()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete (temp);
        }
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
        }
        else
        {
            return head->data;
        }
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    while(!q.empty()){
        cout << q.front() << " ";
        q.dequeue();
    }
    return 0;
}
