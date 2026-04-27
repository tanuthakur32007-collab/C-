#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;
    string country;

public:
    void setValues();
    void getValues();
};

void Person::setValues()
{
    cout << "Enter person name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter country : ";
    cin >> country;
}

void Person::getValues()
{
    cout << endl;
    cout << "The details you have entered" << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Country : " << country << endl;
}

int main()
{
    Person P1;
    P1.setValues();
    P1.getValues();

    return 0;
}