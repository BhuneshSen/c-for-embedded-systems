/*
Question:
---------
Write a C program to dynamically allocate two integer arrays of different sizes,
take input from the user, and create a third array that stores the element-wise
sum of the two arrays. If one array is larger, copy the remaining elements of the
larger array directly into the sum array.

Example:
Array 1: 1 2 3 4
Array 2: 5 6
Sum Array: 6 8 3 4
*/

#include <stdio.h>
#include <stdlib.h>

void input_Array(int arr[], int n);

int main() {
    int s1, s2;

    int *ptr_arr1;
    int *ptr_arr2;
    int *ptr_sum_arr;

    // Read sizes of both arrays
    printf("Enter the Size of Array 1: ");
    scanf("%d", &s1);

    printf("Enter the Size of Array 2: ");
    scanf("%d", &s2);

    // Dynamic memory allocation
    ptr_arr1 = (int *)malloc(s1 * sizeof(int));
    ptr_arr2 = (int *)malloc(s2 * sizeof(int));

    // Determine size of sum array
    int sum_size = (s1 > s2) ? s1 : s2;
    int size_small_arr = (s1 < s2) ? s1 : s2;

    ptr_sum_arr = (int *)malloc(sum_size * sizeof(int));

    // Input array elements
    input_Array(ptr_arr1, s1);
    input_Array(ptr_arr2, s2);

    // Add common elements of both arrays
    for (int i = 0; i < size_small_arr; i++) {
        ptr_sum_arr[i] = ptr_arr1[i] + ptr_arr2[i];
    }

    // Copy remaining elements from the larger array
    for (int i = size_small_arr; i < sum_size; i++) {
        if (s1 > s2) {
            ptr_sum_arr[i] = ptr_arr1[i];
        } else {
            ptr_sum_arr[i] = ptr_arr2[i];
        }
    }

    // Print the sum array
    printf("Sum Array: ");
    for (int i = 0; i < sum_size; i++) {
        printf("%d ", ptr_sum_arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(ptr_arr1);
    free(ptr_arr2);
    free(ptr_sum_arr);

    return 0;
}

// Function to input array elements
void input_Array(int *ptr, int n) {
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
}
