// Write a program to get addition of digits of a number
#include <stdio.h>

int main()
{
    int ans = 0;
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    while (num != 0)
    {
        int rem = num % 10;
        ans = ans + rem;
        num = num / 10;
    }

    printf("\nSum of Digits of is %d", ans);
    return 0;
}