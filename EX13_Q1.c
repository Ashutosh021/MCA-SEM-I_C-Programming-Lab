
#include <stdio.h>

// Define macros for math operators
#define PLUS(x, y) ((x) + (y))
#define MINUS(x, y) ((x) - (y))
#define MULT(x, y) ((x) * (y))
#define DIVIDE(x, y) ((y) != 0 ? ((x) / (y)) : 0)

int main() {
    // Define variables
    int x, y, z;

    // Input values for x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Perform operations using macros
    z = PLUS(x, y);
    printf("x PLUS y = %d\n", z);

    z = MINUS(x, y);
    printf("x MINUS y = %d\n", z);

    z = MULT(x, y);
    printf("x MULT y = %d\n", z);

    z = DIVIDE(x, y);
    printf("x DIVIDE y = %d\n", z);

    return 0;
}
