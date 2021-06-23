#include<stdio.h>
double sum2(int n){
	if( n == 1 ){
		return 1;
	}
	return sum2( n-1 ) + 1.0/n;
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n: ");
		scanf("%d", &n);
	}while( n<=0 );
	printf("Sum of 1 + 1/2 + ... + 1/%d = %0.5lf", n, sum2(n));
	return 0;
}
