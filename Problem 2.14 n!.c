#include<stdio.h>
unsigned long long factorial(int n){
	if( n == 0 || n==1 ){
		return 1;
	}
	return factorial(n-1)*n;
}
int main(){
	int n;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	printf("%d! = %u", n, factorial(n));
	return 0;
}
