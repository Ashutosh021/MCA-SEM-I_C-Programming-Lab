#include <stdio.h>

// Define a union named "NumberUnion"
union NumberUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare an instance of the union
    union NumberUnion myUnion;

    // Initialize the union with an integer value
    myUnion.intValue = 42;

    // Access and print the integer value
    printf("Integer Value: %d\n", myUnion.intValue);

    // Initialize the union with a float value
    myUnion.floatValue = 3.14;

    // Access and print the float value
    printf("Float Value: %.2f\n", myUnion.floatValue);

    // Initialize the union with a character value
    myUnion.charValue = 'A';

    // Access and print the character value
    printf("Character Value: %c\n", myUnion.charValue);

    // Print the values of all members of the union to illustrate the shared memory
    printf("\nValues after union usage:\n");
    printf("Integer Value: %d\n", myUnion.intValue);
    printf("Float Value: %.2f\n", myUnion.floatValue);
    printf("Character Value: %c\n", myUnion.charValue);

    return 0;
}

