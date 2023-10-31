//Write a menu driven program to implement factorial, X to the power y, additions of digits of a 
// number using switch and functions

#include <stdio.h>

// Function declarations
void factorial(int num1)
{
    int fact = 1;
    for(int i=1;i<=num1;i++){
        fact = fact * i;
    }
    printf("\nFactorial of %d is %d",num1,fact);
}
void findPower(int x, int y)
{
    int ans = 1;
    for(int i=1;i<=y;i++){
        ans = ans * x;
    }
    printf("\n%d to the power %d is = %d",x,y,ans);

}
void sumDigits(int num1)
{
    int ans=0;
    while(num1!=0){
        int rem = num1 % 10;
        ans = ans + rem;
        num1 = num1 /10;
    }

    printf("\nSum of Digits of is %d",ans);
    
}


int main()
{
    int choice;
    int num1, num2;

    do
    {
        // Display menu
        printf("\n\nMenu:\n");
        printf("1. Factorial\n");
        printf("2. X to the power Y\n");
        printf("3. Addition of Digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice)
        {
        case 1:
            printf("Enter a number : ");
            scanf("%d", &num1);
            factorial(num1);
            break;
        case 2:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            printf("Enter num2 : ");
            scanf("%d", &num2);
            findPower(num1, num2);
            break;
        case 3:
            printf("Enter num1 : ");
            scanf("%d", &num1);
            sumDigits(num1);
            break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
        } 
    } while (choice != 4);

    return 0;
}
