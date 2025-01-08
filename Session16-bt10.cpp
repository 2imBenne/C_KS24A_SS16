#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void delbyIndex(int *arr, int pos, int n){
	//lay do dai mang
	for(int i = pos;i<n -1;i++){
		*(arr+i) = *(arr+i+1);
	} 
} 


int main(){
	int arr[10]={1,2,3,4,5};
	int size = sizeof(arr) / sizeof(int); 
	int n =5;
	printf("mang truoc khi xoa: \n");
	for(int i = 0;i<n;i++){
		printf("%d\t",*(arr+i)); 
	} 
	printf("\n"); 
	
	printf("mang sau khi xoa: \n");
	delbyIndex(arr,2,n); 
	n--; 
	for(int i = 0;i<n;i++){
		printf("%d\t",*(arr+i)); 
	} 
	
	
	return 0; 
} 
