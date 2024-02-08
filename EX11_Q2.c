// Write a program to find length of string using string array

#include <stdio.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
