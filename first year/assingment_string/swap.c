#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10];
    char s2[10];
    gets(s1);
    gets(s2);
    int temp;
    for(int i = 0;i<strlen(s1);i++){
        temp = s1[i];
        s1[i] = s2[i];
        s2[i] = temp;
    }
    puts(s1);
    puts(s2);
return 0;
}