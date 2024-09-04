#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char s1[100] = "hello ";
    char s2[100] = "world";
    int p = strlen(s2);
    for (int i = 0; i < strlen(s2); i++)
    {
        s1[p] = s2[i];
        p++;
    }

    for (int i = 0; i < strlen(s1); i++)
    {
        cout << s1[i] << "";
    }
    return 0;
}