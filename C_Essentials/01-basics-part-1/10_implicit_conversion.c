#include <stdio.h>

int main() {
    int a;
    float b;

    printf("Enter an int and a float: ");
    scanf("%d %f", &a, &b);

    printf("Sum (int + float) = %f\n", a + b);
    printf("Product (int * float) = %f\n", a * b);

    return 0;
}

