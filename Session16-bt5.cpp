#include <stdio.h>

void updateArr(int arr[],int *newVal,int *index){
	arr[*index -1] = *newVal; 
} 

void printArr(int arr[],int *n){
	for(int i =0;i< *n;i++){
		printf("%d",*(arr+i)) ;
	} 
} 
int main(){
	int n = 5;
	int arr[n] = {1,2,3,4,5};
	printf("Before update: ");
	printArr(arr,&n); 
	int newVal = 69, index = 3;
	updateArr(arr,&newVal,&index);
	printf("\nAfter update: ");
	printArr(arr,&n); 
	 
} 
