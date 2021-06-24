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
int main(){
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);
	if(prime(n)){
		printf("%d is a prime number.", n);
	}else{
		printf("%d is not a prime number.", n);
	}	
	return 0;
}
