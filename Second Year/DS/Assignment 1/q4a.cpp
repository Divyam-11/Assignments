#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
    for (auto i : arr)
    {
        cout << "Element  : " << i << endl;
    }
    return 0;
}