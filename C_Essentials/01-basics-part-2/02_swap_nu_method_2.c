#include<stdio.h>
int main(){
	int num1, num2;
	printf("Enter 2 Numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Numbers before Swap: \n");
	printf("\t num1: %d | num2: %d \n", num1, num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("Numbers before Swap: \n");
	printf("\t num1: %d | num2: %d \n", num1, num2);

	return 0;
}
