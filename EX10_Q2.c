#include <stdio.h>

void printArray(int **ppArray, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", ppArray[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 3;
    int cols = 4;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int **ppArray;

    ppArray = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i)
    {
        ppArray[i] = array[i];
    }

    printf("Array elements:\n");
    printArray(ppArray, rows, cols);

    free(ppArray);

    return 0;
}
