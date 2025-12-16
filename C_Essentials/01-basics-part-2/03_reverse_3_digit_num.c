#include <stdio.h>
int main(){
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);

	int temp, res = 0;

	while(num > 0){
		temp = num % 10; // this give last once digit of a number
		res = res * 10 + temp;
		num = num / 10;
	}

	printf("Reversed Num is: %d \n", res);

	return 0;
}
