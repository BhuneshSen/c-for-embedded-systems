// ------ C program to print list of prime numbers.------
#include<stdio.h>

int isPrime(int num);

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
	
	for(int i=1; i<=num; i++){
	int temp = isPrime(i); 	// 0 -> prime | 1 -> No Prime
		if(temp == 0){
			printf("%d, ", i);
		}
	}
    return 0;
}

int isPrime(int num){
	int check = 0;
	int i = 2;
	while(i < num){
		if(num % i == 0){
			check = 1;
			break;
		}
		i++;
	}
	return check;
}
