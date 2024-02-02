
#include <stdio.h>

// Function with a static variable
void demonstrateStaticVariable()
{
    // Static variable retains its value between function calls
    static int staticVar = 0;

    // Increment the static variable
    staticVar++;

    // Print the current value of the static variable
    printf("Static variable: %d\n", staticVar);
}

int main()
{
    // Call the function multiple times to demonstrate static variable behavior
    demonstrateStaticVariable();
    demonstrateStaticVariable();
    demonstrateStaticVariable();

    return 0;
}
