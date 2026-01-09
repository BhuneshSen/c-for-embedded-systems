/*
# Program 6: Matrix Operations Using Functions
This C program performs matrix addition, subtraction, and multiplication using a modular, function-based approach.
*/

#include <stdio.h>

#define MAX 10

void readMatrix(int mat[MAX][MAX], int r, int c);
void printMatrix(int mat[MAX][MAX], int r, int c);
int addMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int r1, int c1, int r2, int c2);
int subtractMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int r1, int c1, int r2, int c2);
int multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int r1, int c1, int r2, int c2);

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter elements of Matrix A:\n");
    readMatrix(A, r1, c1);

    printf("\nEnter elements of Matrix B:\n");
    readMatrix(B, r2, c2);

    // Addition
    if (addMatrix(A, B, C, r1, c1, r2, c2)) {
        printf("\nMatrix Addition:\n");
        printMatrix(C, r1, c1);
    } else {
        printf("\nAddition not possible (dimension mismatch).\n");
    }

    // Subtraction
    if (subtractMatrix(A, B, C, r1, c1, r2, c2)) {
        printf("\nMatrix Subtraction (A - B):\n");
        printMatrix(C, r1, c1);
    } else {
        printf("\nSubtraction not possible (dimension mismatch).\n");
    }

    // Multiplication
    if (multiplyMatrix(A, B, C, r1, c1, r2, c2)) {
        printf("\nMatrix Multiplication (A x B):\n");
        printMatrix(C, r1, c2);
    } else {
        printf("\nMultiplication not possible (invalid dimensions).\n");
    }

    return 0;
}

// Function to read matrix
void readMatrix(int mat[MAX][MAX], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to print matrix
void printMatrix(int mat[MAX][MAX], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function for matrix addition
int addMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
              int r1, int c1, int r2, int c2) {
    int i, j;
    if (r1 != r2 || c1 != c2)
        return 0;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return 1;
}

// Function for matrix subtraction
int subtractMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
                   int r1, int c1, int r2, int c2) {
    int i, j;
    if (r1 != r2 || c1 != c2)
        return 0;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return 1;
}

// Function for matrix multiplication
int multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
                   int r1, int c1, int r2, int c2) {
    int i, j, k;
    if (c1 != r2)
        return 0;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return 1;
}
