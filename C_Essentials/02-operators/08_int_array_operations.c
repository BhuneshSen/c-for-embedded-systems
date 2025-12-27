#include<stdio.h>

void print_Array(int arr[], int n);
int sum_Arr(int arr[], int n);
int min_ele_of_arr(int arr[], int n);
int max_ele_of_arr(int arr[], int n);
void input_Array(int arr[], int n);

int main(){

	int arr[100] = {0}, n;
	printf("Enter the Size of Array(Max = 100): ");
	scanf("%d", &n);
	
	input_Array(arr, n);
	print_Array(arr, n);
	
	int sum = sum_Arr(arr, n);
	float avg = (float)sum/n;
	int min = min_ele_of_arr(arr, n);
	int max = max_ele_of_arr(arr, n);
	
	printf("Sum: %d \n", sum);
	printf("Avg: %.2f \n", avg);
	printf("min: %d \n", min);
	printf("max: %d \n", max);
	
	return 0;
}

int min_ele_of_arr(int arr[], int n){
	int min = arr[0];
	
	for(int i=1; i<n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int max_ele_of_arr(int arr[], int n){
	int max = arr[0];
	
	for(int i=1; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int sum_Arr(int arr[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
	sum += arr[i];
	}
	
	return sum;
}

void input_Array(int arr[], int n){
	
	printf("Enter Elements of Array: \n");
	for(int i = 0; i < n; i++){
		printf("Enter element No.%d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
}

void print_Array(int arr[], int n){
	printf("\nElements of Array: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
