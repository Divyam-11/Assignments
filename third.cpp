#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missingNo(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return (i + 1);
        }
    }
    return n + 1;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    cout << missingNo(arr, 6) << endl;

    return 0;
}