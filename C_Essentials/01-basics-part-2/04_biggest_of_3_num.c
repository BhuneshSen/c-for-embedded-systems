#include <stdio.h>
int main(){
	int num1, num2, num3;

	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 > num2 && num1 > num3){
		printf("Num1 is Greater(%d)", num1);
	}else if(num2 > num1 && num2 > num3){
		printf("Num2 is Greater(%d)", num2);
	}else if(num3 > num1 && num3 > num2){
		printf("Num3 is Greater(%d)", num3);
	}
	/*
	else if(num1 == num2 && num2 == num3){
		printf("All Numbers are Equal!");
	
	*/	
	return 0;
}
