
#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &x,&y,&z);
	int max = (x>y)? ((x>z)?x:z) :(y>z)?y:z;
	printf("Greatest is :%d", max);
	return 0;
}
