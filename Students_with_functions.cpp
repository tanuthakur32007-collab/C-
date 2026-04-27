#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;
    double totalmarks;
    double marks[5];
    double percentage;

public:
    void Input();
    void cal();
    void print();
};

void student::Input()
{
    cout << "Enter student details" << endl;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your id : ";
    cin >> id;
    cout << "Enter marks of 5 subjects : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

void student::cal()
{
    for (int i = 0; i < 5; i++)
    {
        totalmarks += marks[i];
    }
    percentage = totalmarks / 5;
}

void student::print()
{
    cout << endl;
    cout << "Name : " << name << endl;
    cout << "Id : " << id << endl;
    cout << "Total marks : " << totalmarks << endl;
    cout << "Percentage : " << percentage << "%" << endl;
}

int main()
{
    student st1;
    st1.Input();
    st1.cal();
    st1.print();
}