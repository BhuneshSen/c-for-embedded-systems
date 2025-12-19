#include<stdio.h>
int sum_of_digit(int);

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
	
	int rec_sum = 0;
while(num >= 10){																	
        num = sum_of_digit(num);
    }
    
    printf("Recursive Sum: %d: ", num);
    return 0;
}

int sum_of_digit(int num){
	int sum = 0;
	while(num>0){
		int temp = num % 10;
		sum +=temp;
		num /= 10;
	}
	return sum;
}
