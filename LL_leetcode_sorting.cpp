#include <iostream>
#include <vector>
using namespace std;

class solution
{
    struct Node
    {
        int val;
        Node *next;
    };
    Node *head;

public:
    solution()
    {
        head = nullptr;
    }

    void pushfront(int val)
    {
        Node *newnode = new Node{val, head};
        head = newnode;
    }

    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void sort()
    {
        Node *temp = head;
        int count = 0;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
        vector<int> arr(count);
        for (int i = 0; i < count; i++)
        {
            arr[i] = temp->val;
            temp = temp->next;
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (arr[i] > arr[j])
                {
                    int tempo = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tempo;
                }
            }
        }
        int k = 0;
        Node *temp2 = head;
        while (temp2 != nullptr)
        {
            temp2->val = arr[k];
            k++;
            temp2 = temp2->next;
        }
    }
};

int main()
{
    solution s1;
    s1.pushfront(20);
    s1.pushfront(30);
    s1.pushfront(2);
    s1.pushfront(80);
    s1.pushfront(50);
    s1.print();
    s1.sort();
    s1.print();

    return 0;
}