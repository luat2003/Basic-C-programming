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
void factorization(int n){
	int i;
	printf("%d = ", n);
	for(i=2;i<=n; ){
		if( prime(n) ){
			printf("%d", n);
			break;
		}
		if( n%i == 0 ){
			n = n/i;
			printf("%d x ", i);
		} else{
			i++;
		}
	}
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n>1 : ");
		scanf("%d", &n);
	}while( n<=1 );
	printf("The prime factorization of %d: ", n);
	factorization(n);
	return 0;
}
