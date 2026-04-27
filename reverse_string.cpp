#include <iostream>
using namespace std;

void reverseString(string &str, int index)
{
    if (index < 0)
    {
        return;
    }

    cout << str[index];
    reverseString(str, index - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: ";
    reverseString(str, str.length() - 1);

    return 0;
}
