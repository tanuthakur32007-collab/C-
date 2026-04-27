#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter size for array : ";
    cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout << "The array you made : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < count / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - i - 1] = temp;
    }

    cout << "\nThe reversed array : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}