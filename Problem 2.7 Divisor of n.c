#include<stdio.h>
void divisor(int n){
	int i;
	for(i=-n;i<=-1;i++){
		if( n%i == 0 ){
			printf("%5d", i);
		}
	}
	for(i=1;i<=n;i++){
		if( n%i == 0 ){
			printf("%5d", i);
		}
	}
}
int main(){
	int n;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while( n<0 );
	if( n == 0 ){
		printf("%d has infinitely many divisors.", n);
	} else{
		printf("All divisors of %d is: ", n);
		divisor(n);
	}
	return 0;
}
