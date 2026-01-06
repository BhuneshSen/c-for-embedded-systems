#include<stdio.h>
#define size 10
void input_Array(int arr[], int n);
int* find_ele(int arr[], int n, int s_ele);

int main(){
	int arr[size];	
	input_Array(arr, size);

	int s_ele;			// s_ele - Search Element
	printf("Enter Element to Search: ");
	scanf("%d", &s_ele);

	int* res = find_ele(arr, size, s_ele);
	
	if(res == NULL){
		printf("Element Not found! \n");
	}else{
		printf("Element is present at Address: %p \n", &arr[0]);
		printf("Element is present at Address: %p \n", res);
	}
	return 0;
}

void input_Array(int arr[], int n){
	
	printf("Enter Elements of Array: \n");
	for(int i = 0; i < n; i++){
		printf("Enter element No.%d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
}

int* find_ele(int arr[], int n, int s_ele){
	int* ptr = NULL;
	for(int i = 0; i < n; i++){
		if(s_ele == arr[i]){
			ptr = &arr[i];		// based on 0 based Indexing
			break;
		}
	}
	return ptr;
}
