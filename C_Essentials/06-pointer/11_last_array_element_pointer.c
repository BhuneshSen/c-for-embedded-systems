#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50, 0};
    int *ptr = arr;

    while (*(ptr + 1) != 0)
    {
        ptr++;
    }

    printf("Last element of array: %d\n", *ptr);

    return 0;
}
