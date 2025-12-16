#include <stdio.h>
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	for(int i=0; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}
