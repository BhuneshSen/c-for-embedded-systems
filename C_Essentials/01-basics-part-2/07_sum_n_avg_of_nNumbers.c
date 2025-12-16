// --------------- Sum and Avarage of a Number ---------------
#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	
	int i=0;
	int sum = 0, Avg;

	while(i<=n){
		sum+=i;
		i++;
	}
	
	Avg = sum/n;

	printf("Sum: %d | Avg: %d \n", sum, Avg);
	return 0;
}
