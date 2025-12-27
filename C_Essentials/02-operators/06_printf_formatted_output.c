#include<stdio.h>
int main(){
	int i;
	float f;
	
	printf("Enter an int: ");
	scanf("%d",&i);
	
	printf("Enter an float: ");
	scanf("%f",&f);
	

	printf("%%5d   : %5d  \n", i);
	printf("%%05d  : %05d \n", i);
	printf("%%-5d  : %-5d \n", i);
	printf("%%8.2f : %8.2f\n", f);
	printf("%%.2f  : %.2f \n", f);
	
	return 0;
}
