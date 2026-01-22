#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial pointer points to arr[0]\n\n");

    printf("Expression: *ptr++\n");
    printf("Value: %d\n", *ptr++);
    printf("Pointer now points to value: %d\n\n", *ptr);

    ptr = arr;   // reset pointer

    printf("Expression: (*ptr)++\n");
    printf("Value: %d\n", (*ptr)++);
    printf("Updated value at arr[0]: %d\n\n", arr[0]);

    ptr = arr;   // reset pointer

    printf("Expression: ++*ptr\n");
    printf("Value: %d\n", ++*ptr);
    printf("Updated value at arr[0]: %d\n\n", arr[0]);

    ptr = arr;   // reset pointer

    printf("Expression: *++ptr\n");
    printf("Value: %d\n", *++ptr);
    printf("Pointer now points to value: %d\n", *ptr);

    return 0;
}
