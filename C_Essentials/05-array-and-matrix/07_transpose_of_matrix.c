/*
Program 7: Transpose of a Matrix using Heap Memory (C)
*/

#include <stdio.h>
#include <stdlib.h>

/* -------- Function Declarations -------- */
void inputMatrix(int *mat, int rows, int cols);
void transposeMatrix(int *mat, int *trans, int rows, int cols);
void displayMatrix(int *mat, int rows, int cols);

/* -------- Main Function -------- */
int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate heap memory
    int *matrix = (int *)malloc(rows * cols * sizeof(int));
    int *transpose = (int *)malloc(rows * cols * sizeof(int));

    if (matrix == NULL || transpose == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    inputMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);

    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    printf("\nTranspose of the Matrix:\n");
    displayMatrix(transpose, cols, rows);

    free(matrix);
    free(transpose);

    return 0;
}

/* -------- Function Definitions -------- */

// Function to input matrix
void inputMatrix(int *mat, int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i * cols + j]);
        }
    }
}

// Function to find transpose
void transposeMatrix(int *mat, int *trans, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j * rows + i] = mat[i * cols + j];
        }
    }
}

// Function to display matrix
void displayMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i * cols + j]);
        }
        printf("\n");
    }
}
