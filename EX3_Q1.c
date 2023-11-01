// Write a program to print the Fibonacci series
#include<stdio.h>
 
int main()
{
    int a=0;
    int b=1;
    int c=0;
    int num;
    printf("Enter range for fibbonacci :- ");
    scanf("%d",&num);

        printf("%d ",a);
        printf("%d ",b);
    for(int i=2;i<num;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}