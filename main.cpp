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
    void push_atTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void delete_atHead()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void delete_atTail()
    {
        if (head == NULL)
            return;
        Node *temp = tail;
        Node *prev = head;
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void print()
    {
        if (head == NULL)
            return;
        cout << head->data << " -> ";
        Node *temp = head->next;
        while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main()
{
    CircularList cll;
    cll.push_atHead(1);
    cll.push_atHead(2);
    cll.push_atHead(3);
    cll.print();
    cll.push_atTail(14);
    cll.delete_atHead();
    cll.push_atTail(54);
    cll.delete_atTail();
    cll.print();
    return 0;
}
