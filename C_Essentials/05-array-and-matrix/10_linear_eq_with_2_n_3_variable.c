#include <stdio.h>

/* Function Declarations */
void solve2Variables(float a1, float b1, float c1,
                     float a2, float b2, float c2);

void solve3Variables(float a1, float b1, float c1, float d1,
                     float a2, float b2, float c2, float d2,
                     float a3, float b3, float c3, float d3);

int main()
{
    int choice;

    printf("Program 10: Solve Linear Equations\n");
    printf("1. Two Variables\n");
    printf("2. Three Variables\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            float a1, b1, c1, a2, b2, c2;

            printf("\nEnter coefficients of equations:\n");
            printf("a1 b1 c1: ");
            scanf("%f %f %f", &a1, &b1, &c1);
            printf("a2 b2 c2: ");
            scanf("%f %f %f", &a2, &b2, &c2);

            solve2Variables(a1, b1, c1, a2, b2, c2);
            break;
        }

        case 2:
        {
            float a1, b1, c1, d1;
            float a2, b2, c2, d2;
            float a3, b3, c3, d3;

            printf("\nEnter coefficients of equations:\n");
            printf("a1 b1 c1 d1: ");
            scanf("%f %f %f %f", &a1, &b1, &c1, &d1);
            printf("a2 b2 c2 d2: ");
            scanf("%f %f %f %f", &a2, &b2, &c2, &d2);
            printf("a3 b3 c3 d3: ");
            scanf("%f %f %f %f", &a3, &b3, &c3, &d3);

            solve3Variables(a1, b1, c1, d1,
                            a2, b2, c2, d2,
                            a3, b3, c3, d3);
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/* Function Definitions */

void solve2Variables(float a1, float b1, float c1,
                     float a2, float b2, float c2)
{
    float det = a1 * b2 - a2 * b1;

    if (det == 0)
    {
        printf("No unique solution exists.\n");
        return;
    }

    float x = (c1 * b2 - c2 * b1) / det;
    float y = (a1 * c2 - a2 * c1) / det;

    printf("Solution:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
}

void solve3Variables(float a1, float b1, float c1, float d1,
                     float a2, float b2, float c2, float d2,
                     float a3, float b3, float c3, float d3)
{
    float det, detX, detY, detZ;

    det = a1 * (b2 * c3 - b3 * c2)
        - b1 * (a2 * c3 - a3 * c2)
        + c1 * (a2 * b3 - a3 * b2);

    if (det == 0)
    {
        printf("No unique solution exists.\n");
        return;
    }

    detX = d1 * (b2 * c3 - b3 * c2)
         - b1 * (d2 * c3 - d3 * c2)
         + c1 * (d2 * b3 - d3 * b2);

    detY = a1 * (d2 * c3 - d3 * c2)
         - d1 * (a2 * c3 - a3 * c2)
         + c1 * (a2 * d3 - a3 * d2);

    detZ = a1 * (b2 * d3 - b3 * d2)
         - b1 * (a2 * d3 - a3 * d2)
         + d1 * (a2 * b3 - a3 * b2);

    printf("Solution:\n");
    printf("x = %.2f\n", detX / det);
    printf("y = %.2f\n", detY / det);
    printf("z = %.2f\n", detZ / det);
}
