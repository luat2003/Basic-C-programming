#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, delta, x1, x2;
	printf("Enter a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	delta = b*b - 4*a*c;
	if( a != 0 ){
		if( delta > 0 ){
			x1 = (-b + sqrt(delta))/2*a;
			x2 = (-b - sqrt(delta))/2*a;
			printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has two distinct solutions: x1 = %0.1f, x2 = %0.1f", a, b, c, x1, x2);
		} else if ( delta == 0 ){
			printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has an unique solution: x = %0.1f", a, b, c, (-b)/2*a);
		} else{
			printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has no solution.", a, b, c);
		}
	} else if ( b != 0){
		printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has an unique solution: x = %0.1f", a, b, c, (-c)/b);
	} else if ( c != 0 ){
		printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has no solution.", a, b, c);
	} else{
		printf("The equation %0.1fx^2 + %0.1fx + %0.1f = 0 has infinitely many solutions.", a, b, c);
	}
	return 0;
}
