#include<stdio.h>
int main(){
	int h,m,s;
	printf("Enter Time in format(HH MM SS): ");
	scanf("%d %d %d",&h,&m,&s);
	
	int sec;
	sec = (h * 60 * 60) + (m * 60)  + s;
	printf("%d:%d:%d in Sec - %d", h, m, s, sec);
	return 0;
}
