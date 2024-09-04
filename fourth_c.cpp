#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "hello";
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            s1[i] = '*';
        }
    }
    char s2[100];
    int j = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == '*')
            continue;
        s2[j] = s1[i];
        j++;
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        cout << s2[i];
    }
    return 0;
}