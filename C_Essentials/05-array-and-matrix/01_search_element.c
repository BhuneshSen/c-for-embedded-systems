#include<stdio.h>
#define size 10
void input_Array(int arr[], int n);
void search_ele(int arr[], int found[], int n, int s_ele);

int main(){
	int arr[size];
	int found[size] = {0};
	
	input_Array(arr, size);

	int s_ele;
	printf("Enter Element to Search: ");
	scanf("%d", &s_ele);

	search_ele(arr, found, size, s_ele);

	int s_ele_available = 0;
	
	printf("Element is present at idx: ");
	for(int i=0; i<size; i++){
		if(found[i]){
			printf("%d, ", found[i]+1);
			s_ele_available = 1;
		}
	}

	if(s_ele_available == 0){
		printf("Element Not found! \n");
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

void search_ele(int arr[], int found[], int n, int s_ele){
	int idx = 0;
	for(int i = 0; i < n; i++){
		if(s_ele == arr[i]){
			found[idx] = i;		// based on 0 based Indexing
			idx++;
		}
	}
}
