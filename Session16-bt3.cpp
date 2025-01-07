#include <stdio.h>

void sumValue(int *a, int *b, int *sum) {
	
	*sum = (*a) + (*b);
    
}

int main() {
    int a = 5;
    int b = 10; 
    int sum ; 
    sumValue(&a, &b, &sum);

    printf("Tong hai so %d va %d la: %d",a,b,sum);

}
