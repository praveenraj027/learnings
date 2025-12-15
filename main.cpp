#include <iostream>
#include <string>
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

class CircularList
{
    Node *head = NULL;
    Node *tail = NULL;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void push_atHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void print()
    {
        if (head == NULL)
            return;
        cout << head->data << " ";
        Node *temp = head;
        while (temp != head)
        {
            cout << temp->data << " ";
        }
        cout << endl;
    }
};

int main()
{
    return 0;
}
