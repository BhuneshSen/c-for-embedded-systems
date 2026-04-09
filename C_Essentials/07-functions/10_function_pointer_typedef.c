#include <stdio.h>

/* typedef for function pointer */
typedef int (*pftype)(int, int);

int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    pftype pf1;

    pf1 = sum;

    printf("Result = %d\n", pf1(10, 20));

    return 0;
}
