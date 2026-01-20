#include <stdio.h>

/* Function Declaration */
unsigned int swapEndian32(unsigned int num);

int main(void)
{
    unsigned int num, converted;

    printf("Program 3: Integer Endian Conversion\n");
    printf("Enter a 32-bit integer (hex): ");
    scanf("%x", &num);

    converted = swapEndian32(num);

    printf("Original Value : 0x%08X\n", num);
    printf("Converted Value: 0x%08X\n", converted);

    return 0;
}

/* Function Definition */
unsigned int swapEndian32(unsigned int num)
{
    return ((num >> 24) & 0x000000FF) |
           ((num >> 8)  & 0x0000FF00) |
           ((num << 8)  & 0x00FF0000) |
           ((num << 24) & 0xFF000000);
}
