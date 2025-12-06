#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Parent class\n";
    }
    virtual void hello()
    {
        cout << "Hello from Parent\n";
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Child Class\n";
    }
    void hello()
    {
        cout << "Hello from child\n";
    }
};

int main()
{
    Child c1;
    c1.hello();
    Parent p1;
    p1.hello();
    return 0;
}
