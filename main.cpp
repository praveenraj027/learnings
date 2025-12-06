#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
    }
};
class Student : public Person
{
public:
    int rollNo;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Piyu";
    s1.age = 12;
    s1.rollNo = 123;
    s1.display();
    return 0;
}
