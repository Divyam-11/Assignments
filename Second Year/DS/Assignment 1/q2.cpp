#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(int nums[], int &size)
{
    if (size == 0)
        return; // Handle empty array case

    int j = 1; // Index for the unique elements
    for (int i = 1; i < size; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    size = j; // Update the size to the number of unique elements
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array (sorted): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    return 0;
}