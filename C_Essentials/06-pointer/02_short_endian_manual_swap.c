#include <stdio.h>

int main(void)
{
    unsigned short int num = 0x0011;
    char *ch_ptr;

    /* Point to the first byte of num */
    ch_ptr = (char *)&num;

    printf("Before Swap (Byte-wise):\n");
    printf("Address: %p | Value: %d\n", (void *)(ch_ptr + 0), *(ch_ptr + 0));
    printf("Address: %p | Value: %d\n", (void *)(ch_ptr + 1), *(ch_ptr + 1));

    printf("Before Swap (Number): 0x%04X\n", num);

    /* Swap bytes */
    char temp = *ch_ptr;
    *ch_ptr = *(ch_ptr + 1);
    *(ch_ptr + 1) = temp;

    printf("\nAfter Swap (Byte-wise):\n");
    printf("Address: %p | Value: %d\n", (void *)(ch_ptr + 0), *(ch_ptr + 0));
    printf("Address: %p | Value: %d\n", (void *)(ch_ptr + 1), *(ch_ptr + 1));

    printf("After Swap (Number): 0x%04X\n", num);

    return 0;
}
