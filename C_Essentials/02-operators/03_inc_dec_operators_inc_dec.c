#include<stdio.h>
int main(){

//  --------------- (A) ------------------
	int i = 5, k;
	k = i++ ;
	printf("k = %d  |  i = %d \n", k, i);	// k = 5, i = 6;
	
	k = 0, i = 5;
	k = ++i;
	printf("k = %d  |  i = %d \n", k, i);	// k = 6, i = 6;
	
//  --------------- (B) ------------------
	int x = 2, y;
	y = x++ * 10;
	
	printf("y = %d  |  x = %d \n", y, x);	// y = 20, x = 3;
	
	x = 2;
	y = ++x * 10;
	
	printf("y = %d  |  x = %d \n", y, x);	// y = 30, x = 3;
	
//  --------------- (C) ------------------
	
	int q, p = 6;
	q = p--/3;
	printf("q = %d  |  p = %d \n", q, p);	// q = 2, p = 5;

	q = --p/3;
	printf("q = %d  |  p = %d \n", q, p);	// q = 1, p = 4;
	
	return 0;
}
