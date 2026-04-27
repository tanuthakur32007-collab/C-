#include <iostream>
using namespace std;
class circle
{
    double radius;

public:
    void input();
    void circle_circumference();
    void circle_area();
};

void circle::input()
{
    cout << "Enter radius : ";
    cin >> radius;
}

void circle::circle_circumference()
{
    cout << "Circumference : " << 2 * 3.14 * radius << endl;
}
void circle::circle_area()
{
    cout << "Area : " << 3.14 * radius * radius << endl;
}

int main()
{
    circle C1;
    C1.input();
    cout << endl;
    C1.circle_circumference();
    cout << endl;
    C1.circle_area();

    return 0;
}