#include<stdio.h>
int sum( int n ){
	if( n == 0 ){
		return 0;
	}
	return sum(n-1) + n;
}
int sumOdd( int n ){
	int i, s=0;
	for( i=0; i<=n; i++){
		if( i%2 != 0){
			s += i;
		}
	}
	return s;
}
int sumEven( int n ){
	int i, s=0;
	for( i=0; i<=n; i++){
		if( i%2 == 0){
			s += i;
		}
	}
	return s;
}
int main(){
	int n;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	printf("Sum of all natural numbers less than or equal %d is: %d", n, sum(n));
	printf("\nSum of all odd natural numbers less than or equal %d is: %d", n, sumOdd(n));
	printf("\nSum of all even natural numbers less than or equal %d is: %d", n, sumEven(n));
	return 0;
}

