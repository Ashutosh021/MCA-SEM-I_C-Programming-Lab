// Write program to convert octal to hexadecimal  and vice versa
#include <stdio.h>

int main()
{

    int num, num2;
    printf("Enter a octal number :- ");
    scanf("%o", &num);

    printf("%o in hexadecimal is %x", num, num);

    printf("\n\nEnter a hexadecimal number :- ");
    scanf("%x", &num2);

    printf("%x in octal is %o", num2, num2);
    return 0;
}