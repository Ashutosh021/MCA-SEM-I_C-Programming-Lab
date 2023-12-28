// Write a program to add two 2 X 2 matrix using pointers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {5, 6, 7, 8};
    int i, j;
    int s[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            *(*(s+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t",*(*(s+i)+j));
        }
        printf("\n");
    }


return 0;
}