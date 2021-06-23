#include<stdio.h>
int sumDivide7(int n){
	int i, s=0;
	for(i=0;i<=n;i+=7){
		s += i;
	}
	return s;
}
int main(){
	int n;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	printf("Sum of all natural numbers less than or equal %d and are divisible by 7 is: %d", n, sumDivide7(n));
	return 0;
}
