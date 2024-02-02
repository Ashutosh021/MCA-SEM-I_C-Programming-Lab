
#include <stdio.h>

// Declaration of an extern variable
extern int externVar;

// Function using the extern variable
void demonstrateExternVariable() {
    // Increment the extern variable
    externVar++;
    
    // Print the current value of the extern variable
    printf("Extern variable: %d\n", externVar);
}

// Definition and initialization of the extern variable
int externVar = 0;

int main() {
    // Call the function multiple times to demonstrate extern variable behavior
    demonstrateExternVariable();
    demonstrateExternVariable();
    demonstrateExternVariable();

    return 0;
}