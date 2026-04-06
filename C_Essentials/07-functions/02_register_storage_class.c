#include <stdio.h>

/* Global variable */
int g = 10;   // register NOT allowed here

int main(void)
{
    register int x = 5;   // local register variable

    printf("Value of x: %d\n", x);

    /* Uncommenting below line will cause error */
    // printf("%p", &x);

    return 0;
}
