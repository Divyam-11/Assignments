#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "Matrix";
    
    printf("Before %s\n", myString);
    
    int length = strlen(myString);
    for (int i = 0; i < length / 2; i++) {
        char temp = myString[i];
        myString[i] = myString[length - i - 1];
        myString[length - i - 1] = temp;
    }
    
    printf("after %s\n", myString);
    
    return 0;
}