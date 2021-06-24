#include<stdio.h>
#include<stdbool.h>
bool reversible(int);
bool reversible(int n){
	int a = n, re = 0;
	while(a>0){
		re = 10*re + a%10;
		a = a/10;
	}
	if( n == re ){
		return true;
	} else{
		return false;
	}
}
int main(){
	int n;
	do{
		printf("Enter a positive integer n : ");
		scanf("%d", &n);
	}while( n<=0 );
	if( reversible(n) ){
		printf("%d is a reversible number.", n);
	} else{
		printf("%d is not a reversible number.", n);
	}
	return 0;
}
