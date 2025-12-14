#include <stdio.h>

int main() {
    double x, y;

    printf("Enter two double numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("Sum = %lf\n", x + y);
    printf("Difference = %lf\n", x - y);
    printf("Product = %lf\n", x * y);
    if (y != 0)
        printf("Quotient = %lf\n", x / y);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}

