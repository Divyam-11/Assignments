#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = {"Helaklsfdlsssaflsalo"};
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 95)
        {
            str[i] -= 32;
        }
    }
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i] << " \t";
    }
    return 0;
}