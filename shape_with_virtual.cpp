#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class circle : public shape
{

    double r;

public:
    circle(double radii)
    {
        r = radii;
    }

    void area() override
    {
        cout << "Area : " << 3.14 * r * r << endl;
    }

    void perimeter() override
    {
        cout << "Perimeter : " << 2 * 3.14 * r << endl;
    }
};
class Rectangle : public shape
{

    double l;
    double b;

public:
    Rectangle(double length, double breadth)
    {
        l = length;
        b = breadth;
    }

    void area() override
    {
        cout << "Area : " << l * b << endl;
    }

    void perimeter() override
    {
        cout << "Perimeter : " << 2 * (l + b) << endl;
    }
};

int main()
{
    circle c1(10);
    c1.perimeter();
    c1.area();
    Rectangle r1(10, 20);
    r1.perimeter();
    r1.area();

    return 0;
}