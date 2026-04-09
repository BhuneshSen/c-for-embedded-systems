#include <stdio.h>

/* Function */
int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*fp)(int, int);   // function pointer

    fp = sum;              // assign function

    printf("Result = %d\n", fp(10, 20));

    return 0;
}
