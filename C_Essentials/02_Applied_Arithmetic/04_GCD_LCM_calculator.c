// ---- C program to calculate GCD and LCM of 2 input number----
#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter 2 Number: ");
    scanf("%d %d", &num1, &num2);
	
	int min_num = (num1<num2)? num1: num2;


	
	int lcm = 1, gcd = 1;
	
	for(int i = min_num; i >= 2; i--){
		if(num1 % i == 0 && num2 % i == 0){
			gcd = i;
			break;
		}
	}		

	lcm = (num1 * num2)/gcd;
	printf("GCD: %d | LCM: %d \n", gcd, lcm);	
    return 0;
}
