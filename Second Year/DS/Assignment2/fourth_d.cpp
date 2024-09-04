#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = {'b', 'a', 'd', 'c'};
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j + 1], str[j]);
            }
        }
    }
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}