// Write program using scanf function to insert space into the string

#include<stdio.h>
 
int main()
{  
    char name[100];
    printf("Enter your name:- ");
    scanf("%[^\n]s",name);
    printf("\nYour name is :- %s",name);
    return 0;
}