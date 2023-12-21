// Write a C program to search an element in array using pointers.

#include <stdio.h>

int searchElement(int *arr, int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = searchElement(myArray, size, target);

    if (result != -1)
    {
        printf("\nElement %d found at index %d\n", target, result);
    }
    else
    {
        printf("\nElement %d not found in the array\n", target);
    }

    return 0;
}
