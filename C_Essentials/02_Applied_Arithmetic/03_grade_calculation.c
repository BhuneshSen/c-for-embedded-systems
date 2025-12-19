// ------------- a system to calculate the Grade of the student based on marks in n subjects. -------------
#include<stdio.h>
int main(){
	int num_of_sub;
	printf("Enter No. of Subjects: ");
	scanf("%d", &num_of_sub);
	
	int total_marks = 0;
	
	for(int i=1; i<=num_of_sub; i++){
		int marks;
		printf("Enter marks in subject no.%d : ", i);
		scanf("%d", &marks);
		total_marks += marks;
	}
	
	float per = (total_marks * 100)/(num_of_sub * 100);
	
	printf("\n Your Percentage - %.2f", per);
	printf("\n Grade - ");
	if( per < 45){
		printf("F - Fail");
	}
	else if(per < 50){
		printf("E");
	}
	else if(per < 60){
		printf("D");
	}
	else if(per < 70){
		printf("C");
	}
	else if(per < 80){
		printf("B");
	}
	else if(per < 90){
		printf("B+");
	}
	else if(per < 95){
		printf("A");
	}
	else if(per < 100){
		printf("A+");
	}
	printf("\n ");
	
	return 0;
} 
