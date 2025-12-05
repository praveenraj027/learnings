#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher()
    {
        salary = 12500;
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

    void displaySalary()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Teacher t1;
    Teacher t2;
    t1.name = "Piyu";
    cout << t1.name << endl;
    t1.setSalary(15000);
    t1.displaySalary();
    t2.displaySalary();
    return 0;
}
