#include <stdio.h>

/* Function Declarations */
void arrayOperations(int arr[], int size, int *sum, int *min, int *max);

int main(void)
{
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum, min, max;

    arrayOperations(arr, size, &sum, &min, &max);

    printf("Sum = %d\n", sum);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}

/* Function Definition */
void arrayOperations(int arr[], int size, int *sum, int *min, int *max)
{
    *sum = 0;
    *min = arr[0];
    *max = arr[0];

    for (int i = 0; i < size; i++)
    {
        *sum += arr[i];

        if (arr[i] < *min)
            *min = arr[i];

        if (arr[i] > *max)
            *max = arr[i];
    }
}
