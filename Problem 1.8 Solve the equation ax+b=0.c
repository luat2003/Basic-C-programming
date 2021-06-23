#include<stdio.h>
int main(){
	float a, b;
	printf("Enter a, b: ");
	scanf("%f%f", &a, &b);
	if( a != 0 ){
		printf("\nx = %0.2f is the unique solution of equation %0.1fx + %0.1f = 0.", (-b)/a, a, b);
	} else if( b != 0 ){
		printf("The equation %0.1fx + %0.1f = 0 has no solution.", a, b);
	} else{
		printf("The equation %0.1fx + %0.1f = 0 has infinitely many solutions.", a, b);
	}
	return 0;
}
