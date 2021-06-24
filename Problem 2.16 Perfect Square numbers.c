#include<stdio.h>
#include<math.h>
void listPerfectSquare(int m, int n){
	int i;
	for( i = ceil(sqrt(m)); i <= floor(sqrt(n)); i++){
		printf("%d ", i*i);
	}
}
int numOfNumPS(int m, int n){
	return floor(sqrt(n))-ceil(sqrt(m))+1;
}
int main(){
	int m, n;
	do{
		printf("Enter two natural numbers m<n: ");
		scanf("%d%d", &m, &n);
	}while( m<0 || n<0 || m>=n );
	if( numOfNumPS(m,n)>2 ){
		printf("All perfect square numbers in [%d,%d] are : ", m, n);
		listPerfectSquare(m,n);
		printf("\nThere are %d perfect square numbers in [%d,%d].", numOfNumPS(m,n), m, n);
	} else if( numOfNumPS(m,n) == 1 ){
		printf("All perfect square numbers in [%d,%d] is : ", m, n);
		listPerfectSquare(m,n);
		printf("\nThere is %d perfect square numbers in [%d,%d].", numOfNumPS(m,n), m, n);
	} else{
		printf("There is %d perfect square numbers in [%d,%d].", numOfNumPS(m,n), m, n);
	}
	return 0;
}
