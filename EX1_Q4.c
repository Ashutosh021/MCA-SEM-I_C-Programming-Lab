#include<stdio.h>
#include<ctype.h>
 
int main()
{
    int ch;
    printf("Enter a character :- ");
    scanf(" %c",&ch);
    ch=tolower(ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("\n It is a Vowel");
    }
    else{
        printf("\n It is Not a Vowel");
    }
    return 0;
}