#include <iostream>
using namespace std;

class BankAccount
{
    string ACCH;
    long int ACCN;
    double balance;

    bool isValid()
    {
        return balance > 0;
    }

public:
    BankAccount(string n, long int Ac, double bal)
    {
        ACCH = n;
        ACCN = Ac;
        if (bal >= 0)
        {
            balance = bal;
        }
        else
        {
            cout << "Invalid balance" << endl;
            return;
        }
    }

    string AccH()
    {
        return ACCH;
    }
    long AccN()
    {
        return ACCN;
    }
    double bala()
    {
        return balance;
    }

    void withdraw(int val)
    {
        if (val >= 0)
        {
            if (val >= balance)
            {
                cout << "Insufficient balance" << endl;
                return;
            }
            else
            {
                balance -= val;
            }
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    void deposit(int val)
    {
        if (balance >= 0)
        {
            if (val >= 0)
            {
                balance += val;
            }
            else
            {
                cout << "Invalid amount" << endl;
                return;
            }
        }
        else
        {
            cout << "Invalid balance" << endl;
            return;
        }
    }

    void print()
    {
        cout << endl;
        cout << "Account Holder : " << ACCH << endl;
        cout << "Account number : " << ACCN << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount B1("Jatin", 521555521, 45000);
    B1.deposit(10000);
    B1.print();
    B1.withdraw(20000);
    B1.print();

    return 0;
}