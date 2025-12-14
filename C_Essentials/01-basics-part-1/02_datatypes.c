#include <stdio.h>
int main(){
	unsigned int i = 7;
	printf("Size of int : %ld \n", sizeof(i));
	char c = 'e';
	printf("Size of char : %ld \n", sizeof(c));
					
	float f  = 7.5;
	printf("Size of float : %ld \n", sizeof(f));

	double d  = 7.5;
	printf("Size of double : %ld \n", sizeof(d));
					
	short s = 7;
	printf("Size of short : %ld \n", sizeof(s));
					
	long l = 7;
	printf("Size of long : %ld \n", sizeof(l));
						
	long long int llt = 7;
	printf("Size of llt : %ld \n", sizeof(llt));
					
	printf("Size of void : %ld \n", sizeof(void));
	
	
	return 0;
}
