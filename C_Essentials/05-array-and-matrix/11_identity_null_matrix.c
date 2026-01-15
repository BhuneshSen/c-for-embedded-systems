#include <stdio.h>

/* Function Declarations */
void generateIdentityMatrix(int matrix[10][10], int n);
void generateNullMatrix(int matrix[10][10], int n);
void displayMatrix(int matrix[10][10], int n);

int main()
{
    int choice, n;
    int matrix[10][10];

    printf("Program 11: Identity and Null Matrix\n");
    printf("1. Identity Matrix\n");
    printf("2. Null Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    switch (choice)
    {
        case 1:
            generateIdentityMatrix(matrix, n);
            printf("\nIdentity Matrix:\n");
            displayMatrix(matrix, n);
            break;

        case 2:
            generateNullMatrix(matrix, n);
            printf("\nNull Matrix:\n");
            displayMatrix(matrix, n);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/* Function Definitions */

void generateIdentityMatrix(int matrix[10][10], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }
    }
}

void generateNullMatrix(int matrix[10][10], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
}

void displayMatrix(int matrix[10][10], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
