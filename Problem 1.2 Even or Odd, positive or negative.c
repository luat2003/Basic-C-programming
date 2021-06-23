#include<stdio.h>
int main(){
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);
	if( n > 0 ){
		printf("%d is a positive integer.", n);
	} else if(n < 0) {
		printf("%d is a negative integer.", n);
	} else{
		printf("%d is neither a positive integer nor a negative integer.", n);
	}
	if( n%2 == 0 ){
		printf("\n%d is an even integer.", n);
	} else{
		printf("\n%d is an odd integer.", n);
	}
	return 0;
}
