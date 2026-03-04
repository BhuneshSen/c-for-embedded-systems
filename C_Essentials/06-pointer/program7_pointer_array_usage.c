#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array size: %d\n\n", size);
    printf("Array elements using pointer:\n");

    for (int i = 0; i < size; i++){
        printf("Element %d = %d\n", i, *(ptr + i));
    }

    return 0;
}
