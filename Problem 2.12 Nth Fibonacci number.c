#include<stdio.h>
/* Solution 1: 
int fibonacci(int n){
	if( n==0 || n==1 ){
		return n;
	} 
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	printf("%dth Fibonacci number is: %d", n, fibonacci(n));
	return 0;
}*/
// Solution 2:
int main(){
	int i, n, f0 = 0, f1 = 1, fn;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	fn = n;
	for( i = 2; i<=n; i++){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	printf("%dth Fibonacci number is: %d", n, fn);
	return 0;
}
