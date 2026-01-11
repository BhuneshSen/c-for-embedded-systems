/*
Problem:
---------
Write a C program to evaluate a polynomial using an array to store its coefficients.
The polynomial is of the form:

    a0*x^n + a1*x^(n-1) + a2*x^(n-2) + ... + an

To improve efficiency, evaluate the polynomial using Horner’s Method:

    (((a0*x + a1)*x + a2)*x + ... + an)

Constraints:
- Maximum number of coefficients = 10
- Coefficients and x are integers
*/

#include <stdio.h>

#define MAX 10

void input_Array(int arr[], int n);
void print_Array(int arr[], int n);

int main() {
    int arr[MAX], n;
    int x, result;

    // Read number of coefficients
    printf("Enter the number of coefficients (Max = 10): ");
    scanf("%d", &n);

    // Read value of x
    printf("Enter value of x: ");
    scanf("%d", &x);

    // Input and display coefficients
    input_Array(arr, n);
    print_Array(arr, n);

    // Polynomial evaluation using Horner's Method
    result = arr[0];
    for (int i = 1; i < n; i++) {
        result = (x * result) + arr[i];
    }

    // Display result
    printf("Polynomial Result: %d\n", result);

    return 0;
}

// Function to input array elements
void input_Array(int arr[], int n) {
    printf("Enter coefficients:\n");
    for (int i = 0; i < n; i++) {
        printf("Coefficient %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Function to print array elements
void print_Array(int arr[], int n) {
    printf("Polynomial coefficients: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
