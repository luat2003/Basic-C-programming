#include<stdio.h>
int main(){
	int n, i;
	do{
		printf("Enter a natural number n: ");
		scanf("%d", &n);
	}while(n<0);
	printf("All even numbers less than n is: ");
	for( i=0; i<n ; i++){
		if( i%2 == 0 ){
			printf("%3d", i);
		}
	}
	printf("\nAll odd numbers less than n is: ");
	for( i=0; i<n ; i++){
		if( i%2 != 0 ){
			printf("%3d", i);
		}
	}
	return 0;
}
