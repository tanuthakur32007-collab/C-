#include <iostream>
using namespace std;

class LinkedList
{
    // struct inside class
    struct Node
    {
        int data;
        Node* next;
    };

    Node* head;
    Node* tail;

public:
    // constructor
    LinkedList()
    {
        head = tail = NULL;
    }

    // insert at front
    void pushFront(int val)
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = head;

        head = newNode;

        // if list was empty
        if (tail == NULL)
            tail = newNode;
    }

    // insert at back
    void pushBack(int val)
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL)   // empty list
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // display list
    void display()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    LinkedList list;

    list.pushFront(30);
    list.pushFront(10);
    list.pushBack(50);
    list.pushBack(70);

    cout << "Linked List: ";
    list.display();

    return 0;
}