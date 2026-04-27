#include <iostream>
using namespace std;
class student
{
    string name;
    int roll;
    int marks;

public:
    void setdetails()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter marks : ";
        cin >> marks;
    }
    void display()
    {
        cout << endl
             << "Student's details !" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    student s1;
    student s2;
    student s3;

    s1.setdetails();
    s2.setdetails();
    s3.setdetails();

    s1.display();
    s2.display();
    s3.display();


    return 0;
}