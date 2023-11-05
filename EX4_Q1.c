// Write program to convert decimal to octal using format specifier and vice versa
#include<stdio.h>
 
int main()
{
    
    int num,num2;
    printf("Enter a decimal number :- ");
    scanf("%d",&num);

    printf("%d in Octal is %o",num,num);
    
    printf("\n\nEnter a Octal number :- ");
    scanf("%o",&num2);

    printf("%o in Decimal is %d",num2,num2);
    return 0;
}