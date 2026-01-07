/*
Question:
---------
Write a C program to read elements into an array and reverse the array
in place (without using another array). Finally, display the reversed array.

Constraints:
- Array size is fixed to 10 elements
- Reversal should be done using swapping
*/

#include <stdio.h>

#define SIZE 10

void input_Array(int arr[], int n);
void reverse_Array(int arr[], int n);
void print_Array(int arr[], int n);

int main() {
    int arr[SIZE];

    // Input array elements
    input_Array(arr, SIZE);

    // Reverse the array in place
    reverse_Array(arr, SIZE);

    // Print reversed array
    print_Array(arr, SIZE);

    return 0;
}

// Function to input array elements
void input_Array(int arr[], int n) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Function to reverse array using swapping
void reverse_Array(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Function to print array elements
void print_Array(int arr[], int n) {
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
