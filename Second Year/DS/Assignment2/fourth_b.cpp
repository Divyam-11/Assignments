#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[] = "hello";
    for (int i = 0; i < strlen(s1) / 2; i++)
    {
        swap(s1[i], s1[strlen(s1) - i - 1]);
    }
    for (int i = 0; i < strlen(s1); i++)
    {
        cout << s1[i];
    }
    
    return 0;
}