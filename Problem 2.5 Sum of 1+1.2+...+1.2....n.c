#include<stdio.h>
unsigned long long factorial(int n){
	if( n == 1 ){
		return 1;
	}
	return factorial(n-1)*n;
}
unsigned long long sumFactorial(int n){
	if( n == 1 ){
		return 1;
	}
	return sumFactorial(n-1) + factorial(n);
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n: ");
		scanf("%d", &n);
	}while( n<=0 );
	printf("1 + 1.2 + ... + 1.2....%d = %u", n, sumFactorial(n));
	return 0;
}
