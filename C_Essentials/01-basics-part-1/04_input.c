#include <stdio.h>
int main(){
	int i = 0;
	printf("Enter integer: ");
	scanf("%d", &i );

	char ch;
	printf("Enter char: ");
	scanf("%c", &ch);
	
	float f  = 0;
	printf("Enter float: ");
	scanf("%f", &f);

	double d  = 0;
	printf("Enter double: ");
	scanf("%lf", &d);
					
	unsigned int uI = 0;
	printf("Enter unsigned int: ");
	scanf("%u", &uI );
					
	long int lI = 0;
	printf("Enter long int: ");
	scanf("%ld", &lI );
	printf(" int i : %d \n", i);
	
	printf(" char c : %c \n", ch);
	printf(" float f : %f \n", f);
	printf(" double d : %0.3f \n", d);
	printf(" unsigned int uI : %u \n", uI);
	printf(" long int lI : %ld \n", lI);
	return 0;
}
