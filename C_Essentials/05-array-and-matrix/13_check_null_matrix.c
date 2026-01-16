#include <stdio.h>

/* Function Declarations */
void inputMatrix(int matrix[10][10], int rows, int cols);
int isNullMatrix(int matrix[10][10], int rows, int cols);

int main()
{
    int rows, cols, result;
    int matrix[10][10];

    printf("Program 13: Check Null Matrix\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    inputMatrix(matrix, rows, cols);

    result = isNullMatrix(matrix, rows, cols);

    if (result == 1)
        printf("\nThe given matrix is a Null Matrix.\n");
    else
        printf("\nThe given matrix is NOT a Null Matrix.\n");

    return 0;
}

/* Function Definitions */

void inputMatrix(int matrix[10][10], int rows, int cols){
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isNullMatrix(int matrix[10][10], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] != 0)
                return 0;
        }
    }
    return 1;
}
