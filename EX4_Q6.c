// Write program using of 6 function from string.h
#include<stdio.h>
#include<string.h>
 
int main()
{
    char temp[200];

    // strlen
    printf("Enter a string to find length :- ");
    gets(temp);
    printf("\nLength of string is %d",strlen(temp));
    

    // strcpy
    char str1[20];
    char str2[20];
    printf("\n\nEnter string 1 for copy :-  ");
    gets(str1);
    strcpy(str2,str1);
    printf("\n String 1 is = %s",str1);
    printf("\n String 2 is = %s",str2);


    // strcat
    printf("\n\nEnter string for concate :- ");
    gets(str1);
    printf("\nEnter string for concate to above:- ");
    gets(str2);
    strcat(str1,str2);
    printf("\nString after concate %s",str1);
    


    // strcmp    if equal -> return 0 else 1
    printf("\n\nEnter string 1 for compare :- ");
    gets(str1);
    printf("\nEnter string 1 for compare :- ");
    gets(str2);
    printf("\nString after concate %d",strcmp(str1,str2));

    return 0;
}