// Write a C program to reverse an array using pointers.

#include <stdio.h>

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end)
    {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{

    int myArray[] = {1, 2, 3, 4, 5};
    int size = 5
    
    ;
    printf("\nArray Before reversing :  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }

    reverseArray(myArray, size);

    printf("\nArray after reversing :  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
