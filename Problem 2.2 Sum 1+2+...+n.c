#include<stdio.h>
int sum(int n){
	if( n == 1 ){
		return 1;
	} 
	return sum( n-1 ) + n;
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n: ");
		scanf("%d", &n);
	}while( n<=0 );
	printf("Sum of 1 + 2 + ... + %d = %d", n, sum( n ));
	return 0;
}
