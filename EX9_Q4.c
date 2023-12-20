// Write a C program to swap two arrays using pointers.

#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size)
{

    for (int i = 0; i < size; i++)
    {

        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

void displayArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size = 5;

    printf("Array 1 Before Swap");
    displayArray(array1, size);
    printf("Array 2 Before Swap");
    displayArray(array2, size);

    swapArrays(array1, array2, size);

    printf("Array 1 (After Swap)");
    displayArray(array1, size);
    printf("Array 2 (After Swap)");
    displayArray(array2, size);

    return 0;
}
