#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    /* Pointer to const data */
    const int *ptr1 = &a;
    printf("ptr1 points to: %d\n", *ptr1);
    ptr1 = &b;  // allowed

    /* Const pointer to data */
    int *const ptr2 = &a;
    printf("ptr2 points to: %d\n", *ptr2);
    *ptr2 = 15; // allowed
    printf("Updated a: %d\n", a);

    /* Const pointer to const data */
    const int *const ptr3 = &a;
    printf("ptr3 points to: %d\n", *ptr3);

    return 0;
}
