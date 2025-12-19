// -------------C program to check given number is prime or not -------------
#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int isprime = 0;
	for(int i=2; i<num; i++){
		if(num % i == 0){
			isprime = 1;
			break;
		}
	}
	
	if(isprime){
		printf("No, %d is not a prime Number \n", num);
	}
	else{
		printf("Yes, %d is a prime Number \n", num);
	}
	return 0;
}
