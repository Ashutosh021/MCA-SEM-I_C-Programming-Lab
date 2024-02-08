// Write a program to copy one string to another using pointer.
#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    while ((*dest++ = *src++)) {
        // Copy characters from source to destination until '\0' (null terminator) is encountered
    }
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%s", source);

    // Call the function to copy the string
    stringCopy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
