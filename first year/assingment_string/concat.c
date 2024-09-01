#include <stdio.h>

void reverseString(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char s[100] = "today is our lab evaluation";
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    int start = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == ' ') {
            reverseString(&s[start], &s[i - 1]);
            start = i + 1;
        }
    }

    reverseString(&s[start], &s[length - 1]);

    printf("%s", s);
    return 0;
}