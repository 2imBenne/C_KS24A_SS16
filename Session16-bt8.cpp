#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(){
	//khai bao bien
	char *inputStr, *reStr;
	inputStr = (char*)malloc (20*sizeof(char)) ;
	reStr = (char*)malloc (20*sizeof(char)) ;
	//nhap dau vao
	printf("Hay nhap vao 1 chuoi: ");
	gets(inputStr);
	printf("Input: %s\n",inputStr);
	//dao nguoc chuoi
	strrev(inputStr);
	//copy gia tri luu vao bien reverse
	strcpy(reStr,inputStr);
	
	printf("Output: %s\n",reStr);
	 
} 
