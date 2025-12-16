#include <stdio.h>
int main(){
	char ch;
	printf("Enter the Character: ");
	scanf("%c", &ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("Given Character is Vowel...\n");
	}else{
		printf("Given Character is not Vowel...\n");
	}

	return 0;
}
