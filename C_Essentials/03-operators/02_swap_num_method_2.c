#include<stdio.h>

void swap_num_using_temp(int* m, int* n);
void swap_num_without_temp_var(int*, int*);
void swap_num_with_xor(int*, int*);

void display_before_swap(int, int);
void display_after_swap(int, int);

int main(){
	
	int num1, num2;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	display_before_swap(num1, num2);

//	swap_num_using_temp(&num1, &num2);
//	swap_num_without_temp_var(&num1, &num2);
	swap_num_with_xor(&num1, &num2);
	
	display_after_swap(num1, num2);
	
	return 0;
}

void swap_num_with_xor(int* n1, int*n2){
 *n1 = *n1 ^ *n2;
 *n2 = *n1 ^ *n2;
 *n1 = *n1 ^ *n2;	
}

void swap_num_without_temp_var(int *n1, int *n2){
 *n1 = *n1 + *n2;
 *n2 = *n1 - *n2;
 *n1 = *n1 - *n2;
 
}

void swap_num_using_temp(int *m, int *n){
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
	
}

void display_before_swap(int n1, int n2){
	printf("Before Swap: ");
	printf("num1: %d | num2: %d \n", n1, n2);
}
void display_after_swap(int n1, int n2){
	printf("After Swap : ");
	printf("num1: %d | num2: %d \n", n1, n2);
}
