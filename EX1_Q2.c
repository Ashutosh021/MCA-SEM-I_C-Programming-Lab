#include<stdio.h>
 
int main()
{
    int num;
    printf("\nEnter a number :- ");
    scanf("%d",&num);

    if(num%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is ODD");
    }
    return 0;
}