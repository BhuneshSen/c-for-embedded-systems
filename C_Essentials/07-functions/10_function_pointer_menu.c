#include <stdio.h>

/* Functions */
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

typedef int (*pftype)(int, int);

int main(void)
{
    int choice, x = 10, y = 5;

    /* Array of function pointers */
    pftype operations[] = {add, sub, mul};

    printf("0: Add\n1: Subtract\n2: Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 2)
        printf("Result = %d\n", operations[choice](x, y));
    else
        printf("Invalid choice\n");

    return 0;
}
