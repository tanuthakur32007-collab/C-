#include <iostream>
using namespace std;
class time
{
    int hours;
    int minute;
    int seconds;

    int isValid(int t, int l)
    {
        if (t <= l)
        {
            return t;
        }
        else
        {
            cout << "Invalid time." << endl;
            return 0;
        }
    }

public:
    time(int h, int m, int s)
    {
        if (isValid(h, 24))
        {
            hours = h;
        }
        if (isValid(m, 60))
        {
            minute = m;
        }
        if (isValid(s, 60))
        {
            seconds = s;
        }
    }

    int gethour()
    {
        return hours;
    }
    int getminute()
    {
        return minute;
    }
    int getseconds()
    {
        return seconds;
    }

    void display(){
        cout<<"Current Time"<<endl;
        cout<<hours<<":"<<minute<<":"<<seconds<<endl;
    }
};

int main()
{
    time t1(12,45,56);
    t1.display();

    return 0;
}