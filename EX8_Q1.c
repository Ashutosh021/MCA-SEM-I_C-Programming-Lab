#include <stdio.h>

void addMatrix(int a[][10], int b[][10], int r1, int c1) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", (a[i][j] + b[i][j]));
        }
        printf("\n");
    }
}

void subMatrix(int a[][10], int b[][10], int r1, int c1) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", (a[i][j] - b[i][j]));
        }
        printf("\n");
    }
}

void transpose(int a[][10], int r1, int c1) {
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    
    int mat1[10][10];
    int mat2[10][10];
    printf("\nEnter row for matrix 1 :- ");
    scanf("%d", &r1);
    printf("\nEnter column for matrix 1 :- ");
    scanf("%d", &c1);
    printf("\nEnter row for matrix 2 :- ");
    scanf("%d", &r2);
    printf("\nEnter column for matrix 2 :- ");
    scanf("%d", &c2);

    printf("Enter Matrix 1 Values :- ");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Matrix 2 Values :- ");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if ((r1 == r2) && (c1 == c2)) {
        printf("\nMatrix Addition:\n");
        addMatrix(mat1, mat2, r1, c1);
        printf("\nMatrix Subtraction:\n");
        subMatrix(mat1, mat2, r1, c1);
    } else {
        printf("Addition or Subtraction not possible. r1!=r2 or c1!=c2\n");
    }

    printf("\nTranspose of Matrix 1:\n");
    transpose(mat1, r1, c1);
    printf("\nTranspose of Matrix 2:\n");
    transpose(mat2, r2, c2);

    return 0;
}
