#include<stdio.h>
int sumOfDigits(int n){
	int s = 0;
	while( n>0 ){
		s += n%10;
		n=n/10;
	}
	return s;
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n : ");
		scanf("%d", &n);
	}while( n<=0 );
	printf("Some of digits of %d is: %d", n, sumOfDigits(n));
	return 0;
}
