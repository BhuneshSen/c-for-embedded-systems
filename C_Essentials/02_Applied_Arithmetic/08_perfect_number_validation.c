// ------------- C program to check given no. is perfect no. or not -------------
#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int sum = 0;
	
	for(int i=1; i < num; i++){
		if( num % i == 0){
			sum += i;
		}
	}
	
	if(sum == num){	
		printf(" Num is Perfect");
	}
	else{
		printf(" Num is not Perfect");
	}
	
	printf("\n");
	
	return 0;
}
