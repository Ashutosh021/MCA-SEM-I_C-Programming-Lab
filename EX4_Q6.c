// Write program using of 6 function from string.h
#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[100];
    char str2[100];

    printf("Enter a string :- ");
    gets(str);
    printf("Entered string is:- ");
    puts(str);

    printf("Length of string :- %d",strlen(str));
    printf("\nLower to Upper :- %s",strupr(str));
    printf("\nUpper to Lower :- %s",strlwr(str));

    strcpy(str2,str);
    printf("\nCopy to str2 :- %s",str2);
    printf("\nConcat of String :- %s",strcat(str2,str));
    printf("\nString Reverse:- %s",strrev(str));
    printf("\nComparison:- %d",strcmp(str,str2));

    return 0;
}