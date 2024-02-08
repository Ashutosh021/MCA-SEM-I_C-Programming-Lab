// Write a program to concatenate two strings using string array.
#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copy str1 to result
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Concatenate str2 to result
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
