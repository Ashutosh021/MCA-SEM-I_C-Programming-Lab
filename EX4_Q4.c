// Write program using string input and output function ( gets and puts)

#include<stdio.h>
 
int main()
{
    char name[200];
    printf("Enter your name :- ");
    gets(name);

    printf("Your name is ");
    puts(name);
    return 0;
}