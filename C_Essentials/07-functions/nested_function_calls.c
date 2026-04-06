#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    int x = -3;
    char ch = 'a';

    /* Nested math functions */
    double result = sqrt(pow(2, abs(x)));
    printf("Result: %.2f\n", result);

    /* Nested character functions */
    printf("Uppercase character: ");
    putchar(toupper(ch));
    printf("\n");

    return 0;
}
