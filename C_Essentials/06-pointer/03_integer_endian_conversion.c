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
/*
    // Approach
    unsigned int b1, b2, b3, b4;

    b1 = (num & 0x000000FF) << 24;  // lowest byte → highest
    b2 = (num & 0x0000FF00) << 8;   // 2nd byte → 3rd
    b3 = (num & 0x00FF0000) >> 8;   // 3rd byte → 2nd
    b4 = (num & 0xFF000000) >> 24;  // highest byte → lowest

    return b1 | b2 | b3 | b4;
*/
    
    return ((num >> 24) & 0x000000FF) |
           ((num >> 8)  & 0x0000FF00) |
           ((num << 8)  & 0x00FF0000) |
           ((num << 24) & 0xFF000000);
}
