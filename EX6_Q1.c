// Write a program which includes the following functions in recursive manner
//      Factorial(n) // to caclulate factorial of a give number
//      Fib(n) // to calculate nth Fibonacci term
//      Ackermann(0,n) // to compute ackermann function


#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

void printFib(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");  
}

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    printf("Factorial is: %d\n", factorial(num));
    
    printf("Fibonacci sequence up to %d: ", num);
    printFib(num);

    
    int result = ackermann(0, num);
    printf("Ackermann(0, %d) = %d\n", num, result);

    return 0;
}
