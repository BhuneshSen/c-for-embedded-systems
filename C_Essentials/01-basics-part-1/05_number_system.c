#include <stdio.h>
int main(){
	int i;
	printf("Enter a num: ");
	scanf("%d", &i);

	printf("HexaDecimal representation for %d is : %X \n", i, i);
	printf("Octal representation for %d is : %o \n", i, i);
	return 0;
}
