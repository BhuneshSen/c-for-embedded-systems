// ------------------- Factorial of n Numbers ----------------

#include <stdio.h>
int main(){
	int n;
	printf("Enter Num: ");
	scanf("%d",&n);
		
	if(n<0){
		printf("Enter Valid Number...");
	}
	else if(n == 0){
		printf("Factorial is 1");
	}
	else{
		int fact = 1;
		for(int i=1; i<=n; i++){
			fact *=i;
		}
		printf("Factorial of n is: %d \n", fact);
	}
	return 0;
}
