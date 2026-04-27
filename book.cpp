#include <iostream>
using namespace std;
class book
{
    string title[5];
    string author[5];
    double price[5];

public:
    void getinput()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter title of book : ";
            getline(cin, title[i]);
            cout << "Enter author : ";
            getline(cin, author[i]);
            cout << "Enter price : ";
            cin >> price[i];
            cin.ignore();
            cout << endl;
        }
    }

    void print()
    {
        cout << "Books details " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Book " << i + 1 << endl;
            cout << "Title : " << title[i] << endl;
            cout << "Author : " << author[i] << endl;
            cout << "Price : " << price[i] << endl;
        }
    }

    void mostexpensive()
    {
        double max = 0;
        int store = 0;
        for (int i = 0; i < 5; i++)
        {
            if (max <= price[i])
            {
                max = price[i];
                store = i;
            }
        }
        cout << "Most expensive book : " << title[store] << endl;
    }
};

int main()
{
    book b1;
    b1.getinput();
    b1.print();
    b1.mostexpensive();

    return 0;
}