// ------------- C program to print Fibonacci series -------------
#include<stdio.h>
int main(){
	int num;
	int fir = 0, sec = 1, cur;
	printf("Enter number: ");
	scanf("%d", &num);
	
	
	printf("Fibonacci Seires till n:  0, 1, ");
	for(int i=3; i<=num; i++){
		cur = fir + sec;
		if(i == num){
			printf("%d ", cur);	
		}
		else{
			printf("%d, ", cur);
		}
		fir = sec;
		sec = cur;
	}
	printf("\n");
	return 0;
}
