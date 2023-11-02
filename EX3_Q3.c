// Write a program to print the following star pattern

// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main()
{
    int n = 5;
    printf("The Pattern is \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}