// Write a program to find length of string using pointers

#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Use pointer to find the length of the string
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
