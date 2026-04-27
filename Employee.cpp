#include <iostream>
using namespace std;
class Employee
{
    string name;
    int EID;
    int salary;
    int performance;

public:
    void setDetails(string n, int i, int s)
    {
        name = n;
        EID = i;
        salary = s;
        cout << "Name : " << name << endl;
        cout << "ID : " << EID << endl;
        cout << "Salary : " << salary << endl;
    }

    void performane()
    {
        cout << "Rate performane on a scale of 6-10 : ";
        cin >> performance;
        if (performance == 10)
        {
            salary += 5000;
        }
        else if (performance == 9)
        {
            salary += 4000;
        }
        else if (performance == 8)
        {
            salary += 3000;
        }
        else if (performance == 7)
        {
            salary += 2000;
        }
        else
        {
            salary += 1000;
        }
    }

    void increment()
    {
        cout << "New salary of employee with ID " << EID << " is " << salary << endl;
    }
};

int main()
{
    Employee E1;
    cout << endl;
    Employee E2;
    cout << endl;
    Employee E3;

    E1.setDetails("Jatin", 12, 12000);
    E2.setDetails("Harsh", 15, 10000);
    E3.setDetails("Golu", 46, 45000);
    cout << endl;

    E1.performane();
    E2.performane();
    E3.performane();
    cout << endl;
    E1.increment();
    E2.increment();
    E3.increment();

    return 0;
}