#include <stdio.h>

int main(void)
{
    int arr[3][4];
    int (*ptr)[4] = arr;

    printf("Size of entire array: %lu bytes\n", sizeof(arr));
    printf("Size of one row: %lu bytes\n", sizeof(arr[0]));
    printf("Size of pointer: %lu bytes\n", sizeof(ptr));
    printf("Size of row pointer dereference: %lu bytes\n", sizeof(*ptr));

    return 0;
}
