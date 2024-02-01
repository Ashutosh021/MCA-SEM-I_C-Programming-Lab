// Write C program to create dynamic array using malloc() function.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Input the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array using malloc
    dynamicArray = (int *)malloc(size * sizeof(int));
    // dynamicArray = NULL;

    // Check if memory allocation is successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements into the dynamic array
    printf("Enter %d elements into the dynamic array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display the elements of the dynamic array
    printf("Elements of the dynamic array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", dynamicArray[i]);
    }

    // Free the allocated memory
    free(dynamicArray);

    return 0;
}
