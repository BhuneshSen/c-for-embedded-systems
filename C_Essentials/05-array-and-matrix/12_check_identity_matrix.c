#include <stdio.h>

/* Function Declarations */
void inputMatrix(int matrix[10][10], int n);
int isIdentityMatrix(int matrix[10][10], int n);

int main()
{
    int n, result;
    int matrix[10][10];

    printf("Program 12: Check Identity Matrix\n");
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    inputMatrix(matrix, n);

    result = isIdentityMatrix(matrix, n);

    switch (result)
    {
        case 1:
            printf("\nThe given matrix is an Identity Matrix.\n");
            break;

        case 0:
            printf("\nThe given matrix is NOT an Identity Matrix.\n");
            break;
    }

    return 0;
}

/* Function Definitions */

void inputMatrix(int matrix[10][10], int n){
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isIdentityMatrix(int matrix[10][10], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j && matrix[i][j] != 1)
                return 0;
            if (i != j && matrix[i][j] != 0)
                return 0;
        }
    }
    return 1;
}
