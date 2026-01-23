#include <stdio.h>

int main(void)
{
    int i = 10;
    float f = 5.5;
    char c = 'A';

    void *vptr;

    /* Integer */
    vptr = &i;
    printf("Integer value: %d\n", *(int *)vptr);

    /* Float */
    vptr = &f;
    printf("Float value  : %.2f\n", *(float *)vptr);

    /* Character */
    vptr = &c;
    printf("Character value: %c\n", *(char *)vptr);

    return 0;
}
