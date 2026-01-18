#include <stdio.h>

int main(void)
{
    unsigned int num = 0x00000001;
    char *ch_ptr;

    /* Point to the lowest byte of num */
    ch_ptr = (char *)&num;

    if (*ch_ptr == 1)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");

    return 0;
}
