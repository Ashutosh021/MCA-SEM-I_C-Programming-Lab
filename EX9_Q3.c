// Write a C program to copy one array to another using pointers.

#include <stdio.h>

void copyIt(int *arr, int *copyArray, int size) {
    for (int i = 0; i < size; i++) {
        *(copyArray + i) = *(arr + i);
    }
}

int main() {
    int arr[100];
    int size;

    printf("Enter size of array :- ");
    scanf("%d",&size);

    printf("Enter array element:- ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int copyArr[size];

    copyIt(arr, copyArr, size);

    printf("\nCopied Array  : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copyArr[i]);
    }

    return 0;
}
