#include <stdio.h>
int main(){
	int num1;
	int num2;

	printf("Enter 2 Numbers: ");
	scanf("%d %d", &num1, &num2);
	
	int operation;
	printf("\n 1 - Add \n 2 - Sub \n 3 - Mul \n 4 - Div \n 5 - Mod \n");
	printf("Enter One of the Above Operation to be performed between two Numbers: ");
	scanf("%d", &operation);
	
	printf("\n");	
	switch(operation){

		case 1:
			printf(" Result: %d", num1 + num2);
			break;
		case 2:
			printf(" Result: %d", num1 - num2);
			break;		
		case 3:
			printf(" Result: %d", num1 * num2);
			break;
		case 4:
			printf(" Result: %0.2f", (float)num1 / num2);
			break;
		case 5:
			printf("Result: %d", num1 % num2);
			break;
		default:
			printf("\nPlease, Enter Valid Operator!\n");
	}
	printf("\n");
	return 0;
}
