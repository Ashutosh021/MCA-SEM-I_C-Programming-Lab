// Write a program to read a single dimension array and
// print using functions. Also, add the following functions
// to your program.
//      findminimum()
//      findmaximum()
//      findsumofarray()



#include <stdio.h>

int findMinimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int findMaximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int findSumofArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter array size :- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements :- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nMinimum Element is :- %d", findMinimum(arr, n));
    printf("\nMaximum Element is :- %d", findMaximum(arr, n));
    printf("\nfindSumofArray is :- %d", findSumofArray(arr, n));
    return 0;
}