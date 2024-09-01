#include <stdio.h>
#include <string.h>
void reverseString(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
void reverseWords(char *str) {
    char *wordStart = str;
    char *temp = str;

    // Reverse the entire string
    reverseString(str, str + strlen(str) - 1);

    // Reverse each word in the string
    while (*temp) {
        if (*temp == ' ') {
            reverseString(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }

    // Reverse the last word
    reverseString(wordStart, temp - 1);
}
int main()
{
    char str[] = "hello world";
    puts(str);
    

return 0;
}