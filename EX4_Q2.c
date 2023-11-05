// Write program to convert decimal to hexadecimal using format specifier and vice versa
#include <stdio.h>

int main()
{

    int num, num2;
    printf("Enter a decimal number :- ");
    scanf("%d", &num);

    printf("%d in hexadecimal is %x", num, num);

    printf("\n\nEnter a hexadecimal number :- ");
    scanf("%x", &num2);

    printf("%x in decimal is %d", num2, num2);
    return 0;
}