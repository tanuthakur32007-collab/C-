#include <iostream>
using namespace std;
class CollegeCourse
{
    string courseId;
    char grade;
    int credit;
    int gradePoint;
    int honorPoints;

public:
    void setDetails();
    int calGradePoints();
    float calHonorPoints();
    void display();
};

void CollegeCourse::setDetails()
{
    cout << "Enter course ID : ";
    cin >> courseId;
    cout << "Enter grade : ";
    cin >> grade;
    cout << "Enter credit : ";
    cin >> credit;
}

int CollegeCourse::calGradePoints()
{
    if (grade == 'A' || grade == 'a')
    {
        gradePoint = 10;
    }
    else if (grade == 'B' || grade == 'b')
    {
        gradePoint = 9;
    }
    else if (grade == 'C' || grade == 'c')
    {
        gradePoint = 8;
    }
    else if (grade == 'D' || grade == 'd')
    {
        gradePoint = 7;
    }
    else if (grade == 'E' || grade == 'e')
    {
        gradePoint = 6;
    }
    else
    {
        gradePoint = 5;
    }

    return gradePoint;
}

float CollegeCourse::calHonorPoints()
{
    honorPoints = gradePoint * credit;

    return honorPoints;
}

void CollegeCourse::display()
{
    cout << "Your course details" << endl;
    cout << "Course Id : " << courseId << endl;
    cout << "Grade : " << grade << endl;
    cout << "Credits : " << credit << endl;
    cout << "Grade points : " << gradePoint << endl;
    cout << "Honor points : " << honorPoints << endl;
}

int main()
{

    CollegeCourse C1;
    C1.setDetails();
    C1.calGradePoints();
    C1.calHonorPoints();

    CollegeCourse C2;
    C2.setDetails();
    C2.calGradePoints();
    C2.calHonorPoints();

    CollegeCourse C3;
    C3.setDetails();
    C3.calGradePoints();
    C3.calHonorPoints();

    cout << endl;
    C1.display();
    cout << endl;
    C2.display();
    cout << endl;
    C3.display();
    return 0;
}