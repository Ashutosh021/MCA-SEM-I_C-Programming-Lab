// Write a C program to add two numbers using pointers.

#include <stdio.h>  
  
int main() {  
    int num1 = 10;  
    int num2 = 20;  
    int *p1 = &num1;  
    int *p2 = &num2;  
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    p1 = &num1;  
    p2 = &num2;  
    int sum;  
  
    sum = *p1 + *p2;  
  
    printf("Sum of %d and %d is: %d\n", *p1, *p2, sum);  
  
    return 0;  
}  