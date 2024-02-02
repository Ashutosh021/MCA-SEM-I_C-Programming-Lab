#include <stdio.h>

// Define macro to print elements of an array
#define PRINT_ARRAY(arr, n) \
    do { \
        printf("Elements of the array: "); \
        for (int i = 0; i < (n); ++i) { \
            printf("%d ", (arr)[i]); \
        } \
        printf("\n"); \
    } while (0)

int main() {
    // Declare and initialize an array
    int myArray[] = {1, 2, 3, 4, 5};
    
    // Get the number of elements in the array
    int numElements = sizeof(myArray) / sizeof(myArray[0]);

    // Use the macro to print the elements of the array
    PRINT_ARRAY(myArray, numElements);

    return 0;
}