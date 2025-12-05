#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    // properties / attributes
    string name;
    string dept;
    string subject;
    // methods / member functions

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    void display()
    {
        cout << "Name: " << name << ", Dept: " << dept << ", Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main()
{
    Teacher t1("Piyuuu", "AIML", "OOPS", 12050);
    t1.display();
    return 0;
}
