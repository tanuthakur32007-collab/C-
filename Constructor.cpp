#include <iostream>
using namespace std;

class Marks
{
    int marks[5];

public:
    int t = 0;
    Marks(int m[5])
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
            marks[i] = m[i];
            t += marks[i];
        }
        cout << "T : " << t << endl;
    }
};

int main()
{
    int a[5];
    Marks s(a);
    Marks S1(a);

    return 0;
}