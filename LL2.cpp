#include <iostream>
using namespace std;
class PatientQ
{
    struct Node
    {
        int Pid;
        Node *next;
    };
    Node *head;
    Node *tail;

public:
    PatientQ()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node;
        newNode->Pid = val;
        newNode->next = head;

        head = newNode;

        if (tail == NULL)
        {
            tail = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node;
        newNode->Pid = val;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->Pid << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    PatientQ P1;
    P1.push_front(10);
    P1.push_front(12);
    P1.push_front(15);
    P1.push_front(20);
    P1.push_front(9);
    P1.push_back(100);
    P1.display();

    P1.pop_front();
    P1.pop_back();
    P1.display();

    return 0;
}