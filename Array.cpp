#include <iostream>
using namespace std;

class Inventory
{
    int capacity, size;
    int item[100];

    bool isValid(int index)
    {
        return index >= 0 && index < size;
    }

public:
    Inventory()
    {
        capacity = 100;
        size = 0;
    }

    void get_input()
    {
        cout << "Enter capacity : ";
        cin >> capacity;
        cout << "Enter size : ";
        cin >> size;
        cout << "Enter items : ";
        for (int i = 0; i < size; i++)
        {
            cin >> item[i];
        }
        cout << "YOUR ITEMS : ";
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
    }

    void insert(int val)
    {
        if (size >= capacity)
        {
            cout << "Size full" << endl;
            return;
        }
        item[size] = val;
        size++;
    }

    void insert_at(int pos, int val)
    {
        if (size >= capacity)
        {
            cout << "Size full" << endl;
            return;
        }
        if (pos < 0 || pos > size)
        {
            cout << "Invalid position" << endl;
            return;
        }
        for (int i = size; i > pos; i--)
        {
            item[i] = item[i - 1];
        }
        item[pos] = val;
        size++;
    }

    void remove(int pos)
    {
        for (int i = pos; i < size - 1; i++)
        {
            item[i] = item[i + 1];
        }
        size--;
    }

    void update(int pos, int val)
    {
        if (!isValid(pos))
        {
            cout << "Invalid position" << endl;
            return;
        }
        item[pos] = val;
    }

    void search(int val)
    {
        for (int i = 0; i < size; i++)
        {
            if (item[i] == val)
            {
                cout << "Item founded at " << i + 1 << endl;
            }
        }
    }

    void min_max()
    {
        int max = item[0];
        int min = item[0];

        for (int i = 0; i < size; i++)
        {
            if (item[i] >= max)
            {
                max = item[i];
            }
            if (item[i] <= min)
            {
                min = item[i];
            }
        }
        cout << "Max : " << max << endl;
        cout << "Min : " << min << endl;
    }

    void reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            int temp = item[i];
            item[i] = item[size - 1 - i];
            item[size - 1 - i] = temp;
        }
    }

    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (item[j] > item[j + 1])
                {
                    int temp = item[j];
                    item[j] = item[j + 1];
                    item[j + 1] = temp;
                }
            }
        }
    }

    void display()
    {
        cout << "Updated item list : ";
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};