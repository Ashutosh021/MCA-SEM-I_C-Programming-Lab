// Write a program to multiply two matrix using functions

#include <stdio.h>

void matrixMul(int a[][10], int b[][10], int r1, int c1)
{
    int ans[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < r1; k++)
            {
                ans[i][j] = a[i][k] * b[k][j];
            }
            printf("\n");
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",ans[i][j]);
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    int mat1[10][10];
    int mat2[10][10];
    printf("\nEnter row for matrix 1 :- ");
    scanf("%d", &r1);
    printf("\nEnter column for matrix 1 :- ");
    scanf("%d", &c1);
    printf("\nEnter row for matrix 2 :- ");
    scanf("%d", &r2);
    printf("\nEnter column for matrix 2 :- ");
    scanf("%d", &c2);


    if (c1 == r2)
    {
        printf("Enter Matrix 1 Values :- ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter Matrix 2 Values :- ");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("\nMatrix Multiplication:\n");
        matrixMul(mat1, mat2, r1, c1);
    }
    else
    {
        printf("Multiplication not possible. c1 != r2\n");
    }
    return 0;
}
