#include <iostream>
using namespace std;

void create(int arr[], int *n)
{
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    *n = size;
    cout << "Enter Values" << endl;
    for (int i = 0; i < *n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int *n)
{
    cout << "Array of size " << *n << ":" << endl;
    for (int i = 0; i < *n; i++)
    {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

void insert(int arr[], int *n)
{
    int pos, ele;
    cout << "Enter position of insertion" << endl;
    cin >> pos;
    if (pos < 1 || pos > *n + 1)
    {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Enter Element" << endl;
    cin >> ele;
    for (int i = *n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    *n = *n + 1;
}

void remove(int arr[], int *n)
{
    int pos;
    cout << "Enter Position of Deletion" << endl;
    cin >> pos;
    if (pos < 1 || pos > *n)
    {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos - 1; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    *n = *n - 1;
}

void linear_search(int arr[], int *n)
{
    cout << "Enter Element you want to search" << endl;
    int target;
    cin >> target;
    int flag = 0;
    int target_index;
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            target_index = i;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Element found at index " << target_index << endl;
    }
    else
    {
        cout << "Element not in array" << endl;
    }
}

int main()
{
    int arr[100];
    int n = 0;
    while (1)
    {
        int x;
        cout << "--MENU--" << endl;
        cout << "1. Create" << endl;
        cout << "2. Display" << endl;
        cout << "3. Insert" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Linear Search" << endl;
        cout << "6. Exit" << endl;
        cin >> x;
        if (x == 6)
            break;
        switch (x)
        {
        case 1:
            create(arr, &n);
            break;
        case 2:
            display(arr, &n);
            break;
        case 3:
            insert(arr, &n);
            break;
        case 4:
            remove(arr, &n);
            break;
        case 5:
            linear_search(arr, &n);
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
        }
    }
    return 0;
}