
#include <stdio.h>

// Function with a register variable
void demonstrateRegisterVariable() {
    // Register variable is suggested to be stored in a CPU register
    register int registerVar = 0;
    
    // Increment the register variable
    registerVar++;
    
    // Print the current value of the register variable
    printf("Register variable: %d\n", registerVar);
}

int main() {
    // Call the function multiple times to demonstrate register variable behavior
    demonstrateRegisterVariable();
    demonstrateRegisterVariable();
    demonstrateRegisterVariable();

    return 0;
}
