// Write a program to compare two strings using string array.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, isEqual = 1;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare each character
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i) {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
    }

    if (isEqual) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
