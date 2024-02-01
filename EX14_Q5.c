// Write C program to create dynamic array using calloc() function.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Input the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array using calloc
    dynamicArray = (int *)calloc(size, sizeof(int));

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

    // Free the allocated memory
    free(dynamicArray);

    return 0;
}

