// ------------- C program to check given no. is armstrong or not -------------
#include<stdio.h>

int dgt_len(int);
int dgt_len_times(int, int);

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int sum = 0;
	int num_cpy = num;
	int len = dgt_len(num);
	
	while(num_cpy != 0){
		int temp;
		temp = num_cpy % 10;
		int temp2 = dgt_len_times(temp, len);
		sum += temp2;
		num_cpy /= 10;
	}
	if(sum == num){	
		printf(" Num is Armstrong");
	}
	else{
		printf(" Num is not Armstrong");
	}
	return 0;
}

int dgt_len(int num_cpy){
	int count = 0;
	
	while(num_cpy != 0){
		num_cpy = num_cpy / 10;
		count++;
	}
	return count;
}

int dgt_len_times(int num, int len){
	
	int i=1;
	int product_n_times = 1;
	while(i<=len){
	product_n_times *= num;
	i++;
	}
	return product_n_times;
}
