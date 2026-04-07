#include <stdio.h>

/* Pass by Value */
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapValue: a = %d, b = %d\n", a, b);
}

/* Pass by Reference */
void swapReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10, y = 20;

    swapValue(x, y);
    printf("After swapValue: x = %d, y = %d\n\n", x, y);

    swapReference(&x, &y);
    printf("After swapReference: x = %d, y = %d\n", x, y);

    return 0;
}
