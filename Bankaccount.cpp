#include <iostream>
using namespace std;
class BankAccount
{
    long int AccNo;
    long int balance;
    int cash;
    int choose;

public:
    void Details()
    {
        cout << "Enter Account number : ";
        cin >> AccNo;
        cout << "Enter bank balance : ";
        cin >> balance;
    }

    void money()
    {
        cout << "Enter money : ";
        cin >> cash;
        cout << "PRESS 0 to deposit and PRESS 1 to withdraw money!!" << endl;
        cout << "Enter operation : ";
        cin >> choose;
        if (choose == 0)
        {
            deposit();
        }
        else if (choose == 1)
        {
            if (balance > cash)
            {

                withdraw();
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
        }

        else
        {
            cout << "Please! Only enter between 1 and 0" << endl;
        }
    }

    void deposit()
    {
        balance = balance + cash;
        cout << "Current balance after deposit : " << balance << endl;
    }

    void withdraw()
    {
        balance = balance - cash;
        cout << "Current balance after withdraw : " << balance << endl;
    }
};

int main()
{
    BankAccount B1;
    B1.Details();
    B1.money();

    return 0;
}