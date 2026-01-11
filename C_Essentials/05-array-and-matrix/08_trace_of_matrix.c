#include <stdio.h>

/* Function Declarations */
void inputMatrix(int matrix[10][10], int rows, int cols);
void displayMatrix(int matrix[10][10], int rows, int cols);
int calculateTrace(int matrix[10][10], int size);

/* Main Function */
int main() {
    int matrix[10][10];
    int rows, cols, trace;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Trace is defined only for square matrices */
    if (rows != cols) {
        printf("\nTrace is not defined for non-square matrices.\n");
        return 0;
    }

    inputMatrix(matrix, rows, cols);
    displayMatrix(matrix, rows, cols);

    trace = calculateTrace(matrix, rows);

    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}

/* Function to input matrix elements */
void inputMatrix(int matrix[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Function to display the matrix */
void displayMatrix(int matrix[10][10], int rows, int cols) {
    int i, j;
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

/* Function to calculate trace of matrix */
int calculateTrace(int matrix[10][10], int size) {
    int i, trace = 0;
    for (i = 0; i < size; i++) {
        trace += matrix[i][i];
    }
    return trace;
}
