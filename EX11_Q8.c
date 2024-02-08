// Write a program to concatenate two strings using pointers.

#include <stdio.h>

void stringConcatenate(char *dest, const char *src) {
    // Move dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy characters from source to destination until '\0' (null terminator) is encountered
    while ((*dest++ = *src++)) {
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the function to concatenate the strings
    stringConcatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
