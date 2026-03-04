#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    void *vptr;
  
    vptr = arr;
    printf("Accessing array elements using void pointer:\n");

    for (int i = 0; i < 5; i++){
        printf("%d ", *((int *)vptr + i));
    }
    printf("\n");

    return 0;
}
