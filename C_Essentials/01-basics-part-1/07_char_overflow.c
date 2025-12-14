#include <stdio.h>

int main() {
    char c = 127; // maximum value for signed char
    printf("Initial value of c: %d\n", c);

    c++; // increment beyond max
    printf("After increment (overflow): %d\n", c);

    return 0;
}

