// Write a menu driven program to implement basic arithmetic functions using switch and functions
#include <stdio.h>

// Function declarations
void add(int num1, int num2)
{
    printf("\n%d + %d = %d", num1, num2, (num1 + num2));
}
void subtract(int num1, int num2)
{
    printf("\n%d - %d = %d", num1, num2, (num1 - num2));
}
void multiply(int num1, int num2)
{
    printf("\n%d * %d = %d", num1, num2, (num1 * num2));
}

void divide(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Number Can't be divide by 0");
    }
    else
    {
        printf("\n%d / %d = %d", num1, num2, (num1 / num2));
    }
}

int main()
{
    int choice;
    int num1, num2, result;

    do
    {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice)
        {
        case 1:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            printf("Enter num2 : ");
            scanf("%d", &num2);
            add(num1, num2);
            break;
        case 2:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            printf("Enter num2 : ");
            scanf("%d", &num2);
            subtract(num1, num2);
            break;
        case 3:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            printf("Enter num2 : ");
            scanf("%d", &num2);
            multiply(num1, num2);
            break;
        case 4:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            printf("Enter num2 : ");
            scanf("%d", &num2);
            divide(num1, num2);
            break;
        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
        } 
    } while (choice != 5);

    return 0;
}
