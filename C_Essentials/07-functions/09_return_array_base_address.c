#include <stdio.h>

/* Function returning pointer */
int* getArray(void)
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}

int main(void)
{
    int *ptr = getArray();

    printf("Array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}
