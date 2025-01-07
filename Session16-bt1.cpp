#include <stdio.h>

int main(){
	int x = 10;
	int *ptr = &x;
	//in gia tri 
	printf("%d\n",x) ;
	printf("%d\n",*ptr);
	//in dia chi
	printf("%d\n",&x) ;
	printf("%d\n",ptr);
	 
	
} 
