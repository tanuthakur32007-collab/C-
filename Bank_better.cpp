#include <iostream>
using namespace std;
class BankAccount
{
    string holder;
    long int Accno;
    double balance;

    int isValid(int amt)
    {
        if (amt >= 0)
        {
            return amt;
        }
        else
        {
            return amt = 0;
        }
    }

public:
    BankAccount(string n, long int Acn, double b)
    {
        holder = n;
        Accno = Acn;
        if (isValid(b))
        {
            balance = b;
        }
    }
    void deposit(int amt)
    {
        if (isValid(amt))
        {
            balance += amt;
            cout << "Amount deposited : " << amt << endl;
        }
        else
        {
            cout << "Enter valid amount" << endl;
        }
    }
    void withdraw(int amt)
    {
        if (isValid(amt))
        {
            if (balance >= amt)
            {
                balance -= amt;
                cout << "Amount withdrawl : " << amt << endl;
            }
            else
            {
                cout << "Insufficient balance " << endl;
            }
        }
        else
        {
            cout << "Enter valid amount";
        }
    }
    void display()
    {
        cout << "Account holder : " << holder << endl;
        cout << "Account number : " << Accno << endl;
        cout << "Current balance : " << balance << endl;
    }
    string getname()
    {
        return holder;
    }
    long getno()
    {
        return Accno;
    }
    double getbal()
    {
        return balance;
    }
};

int main()
{
    BankAccount B1("jatin", 213254, 10000);
    B1.deposit(1000);
    B1.withdraw(5000);
    B1.display();

    return 0;
}