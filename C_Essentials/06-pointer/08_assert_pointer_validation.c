#include <stdio.h>
#include <assert.h>

int main(void)
{
    int value = 25;
    int *ptr = &value;

    /* Validate pointer */
    assert(ptr != NULL);

    printf("Pointer is valid\n");
    printf("Value = %d\n", *ptr);

    return 0;
}
