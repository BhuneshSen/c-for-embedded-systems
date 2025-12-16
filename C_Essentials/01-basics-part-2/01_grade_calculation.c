#include <stdio.h>
int main(){
	float marks;
	printf("Enter your Marks: ");
	scanf("%f", &marks);
	
	if(marks>=0 && marks<=100){
		printf("Your Grade based on your marks: ");
	}

	if(marks>=0 && marks<=40){
		printf("F - Fail");
	}
		
	else if(marks>=41 && marks<=50){
		printf("--PASS!--");
	}

	else if(marks>=51 && marks<=60){
		printf("C");
	}

	else if(marks>=61 && marks<=70){
		printf("B");
	}

	else if(marks>=71 && marks<=80){
		printf("B+");
	}

	else if(marks>=81 && marks<=85){
		printf("A");
	}

	else if(marks>=86 && marks<=90){
		printf("A+");
	}

	else if(marks>=91 && marks<=95){
		printf("O");
	}

	else if(marks>=96 && marks<=100){
		printf("O+");
	}

	else{
		printf("Enter Valid Marks...");
	}
	
	printf("\n");
	return 0;
}

