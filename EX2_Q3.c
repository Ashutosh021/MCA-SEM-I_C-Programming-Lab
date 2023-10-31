// Write a menu driven program to check given number is prime and Armstrong using switch and functions

#include <stdio.h>

// Function declarations
void isPrime(int num)
{
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag++;
        }
    }

    if (flag == 0)
    {
        printf("\n%d is Prime", num);
    }
    else
    {
        printf("\n%d is Not Prime", num);
    }
}

int findPower(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}

void isArmstrong(int num)
{
    int ans=0;
    int cnt=0;
    int num2 = num;
    int forCheck = num;

    while(num2!=0){
        num2 = num2 / 10;
        cnt++;
    }
    printf("\n%d cnt",cnt);
    while(num!=0){
        int rem = num % 10;
        ans = ans + findPower(rem,cnt);
        num = num / 10;
    }

    if(forCheck == ans){
        printf("%d is Armstrong",forCheck);
    }
    else{
        printf("%d is Not Armstrong",forCheck);
    }
}

int main()
{
    int choice;
    int num;

    do
    {
        // Display menu
        printf("\n\nMenu:\n");
        printf("1. Prime\n");
        printf("2. Armstrong\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice)
        {
        case 1:
            printf("Enter a number : ");
            scanf("%d", &num);
            isPrime(num);
            break;
        case 2:
            printf("Enter num : ");
            scanf("%d", &num);
            isArmstrong(num);
            break;
        case 3:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 3);

    return 0;
}
