#include <stdio.h>

#define ROWS 2
#define COLS 3

void matrixSum(int a[][COLS], int b[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], result[ROWS][COLS];

    // Get user input for matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Get user input for matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate sum of matrices
    matrixSum(a, b, result);

    // Display matrices and their sum
    printf("Matrix A:\n");
    displayMatrix(a);

    printf("Matrix B:\n");
    displayMatrix(b);

    printf("Sum of matrices:\n");
    displayMatrix(result);

    return 0;
}

