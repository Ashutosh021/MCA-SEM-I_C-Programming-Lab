// Write C program to create dynamic array and resize array using realloc() function.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Input the initial size of the dynamic array
    printf("Enter the initial size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array using malloc
    dynamicArray = (int *)malloc(size * sizeof(int));

    // Check if memory allocation is successful
    if (dynamicArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
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
    printf("\n");

    // Input the new size for resizing the array
    int newSize;
    printf("Enter the new size for resizing the array: ");
    scanf("%d", &newSize);

    // Resize the dynamic array using realloc
    dynamicArray = (int *)realloc(dynamicArray, newSize * sizeof(int));

    // Check if resizing is successful
    if (dynamicArray == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        free(dynamicArray); // Free the previously allocated memory
        return 1;
    }

    // Input additional elements after resizing
    printf("Enter %d more elements into the dynamic array:\n", newSize - size);
    for (int i = size; i < newSize; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display the resized elements of the dynamic array
    printf("Resized Elements of the dynamic array:\n");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(dynamicArray);

    return 0;
}
