/*
program 9: Find the determinant of 2×2 and 3×3 matrices
*/
#include <stdio.h>

/* Input Matrix */
void input2x2(int matrix[2][2]);
void input3x3(int matrix[3][3]);

/* Determinant Calculation */
int determinant2x2(int matrix[2][2]);
int determinant3x3(int matrix[3][3]);

int main()
{
    int choice;

    printf("Program 9: Determinant of 2x2 and 3x3 Matrix\n");
    printf("1. 2x2 Matrix\n");
    printf("2. 3x3 Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int mat2[2][2];
            input2x2(mat2);
            printf("Determinant = %d\n", determinant2x2(mat2));
            break;
        }

        case 2:
        {
            int mat3[3][3];
            input3x3(mat3);
            printf("Determinant = %d\n", determinant3x3(mat3));
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/* Function Definitions */

void input2x2(int matrix[2][2])
{
    printf("\nEnter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void input3x3(int matrix[3][3])
{
    printf("\nEnter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int determinant2x2(int matrix[2][2])
{
    return (matrix[0][0] * matrix[1][1]) -
           (matrix[0][1] * matrix[1][0]);
}

int determinant3x3(int matrix[3][3])
{
    int det;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}
