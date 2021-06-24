#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n);
bool prime(int n){
	int i;
	if( n <= 1 ){
		return false;
	}
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n%i == 0 ){
			return false;
		}
	}
	return true;
}
void firstNPrime(int n){
	int i , j=0 ;
	for( i = 1 ; ; i++ ){
		if( prime(i) ){
			printf("%5d", i);
			j++;
		}
		if( j == n ){
			break;
		}
	}
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n : ");
		scanf("%d", &n);
	}while( n<=0 );
	printf("First %d prime numbers: ", n);
	firstNPrime(n);
	return 0;
}
