#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
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
    Teacher t2(t1); //default copy constructor

    t2.display();
    return 0;
}
