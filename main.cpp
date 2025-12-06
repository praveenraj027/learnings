#include <iostream>
#include <string>
using namespace std;

class Shape
{
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle\n";
    }
};

int main()
{
    Circle s1;
    s1.draw();
    return 0;
}
