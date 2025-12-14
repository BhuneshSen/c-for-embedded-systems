
#include <stdio.h>
int main(){
	float marksInFloat;
	printf("Enter Marks: ");
	scanf("%f", &marksInFloat);
	
	int marksInInt = marksInFloat;
	printf("Marks in Float : %f \n",marksInFloat);
	printf("Marks in Int   : %d \n",marksInInt);
	return 0;
}
