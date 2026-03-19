#include <stdio.h>

void count_Fn_call(void);

int main(){
	
	char ch;
	
	while(1){
	
		printf("enter ch: ");
		getchar();
		scanf("%c", &ch);
			
		if(ch == 'q'){
			printf("Exit");
			return -1;
		}else
			count_Fn_call();			
		}
	return 0;
}

void count_Fn_call(void){
	static int count = 0;
	int var_in_stack;
	count++;
	printf("Function called %d times\n", count);
	printf("add of static int var: %p \n", &count);
	printf("add of local var: %p \n", &var_in_stack);
}
