#include <stdio.h>

int main() {
    int rows, coef = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
