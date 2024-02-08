// Write C program to demonstrate string using pointer to pointer or double pointer

#include <stdio.h>

int main() {
    char **str;
    str = (char **)malloc(sizeof(char *));
    *str = (char *)malloc(20 * sizeof(char));
    strcpy(*str, "Hello, Double Pointer!");
    printf("String using double pointer: %s\n", *str);
    free(*str);
    free(str);
    return 0;
}
