
#include <stdio.h>

// Function with an auto variable
void demonstrateAutoVariable() {
    // Auto variable is created and initialized each time the function is called
    auto int autoVar = 0;
    
    // Increment the auto variable
    autoVar++;
    
    // Print the current value of the auto variable
    printf("Auto variable: %d\n", autoVar);
}

int main() {
    // Call the function multiple times to demonstrate auto variable behavior
    demonstrateAutoVariable();
    demonstrateAutoVariable();
    demonstrateAutoVariable();

    return 0;
}
