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
        cout << "Salary: " << salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Piyu";
    cout << t1.name << endl;
    t1.setSalary(15000);
    t1.displaySalary();
    return 0;
}
