#include<stdio.h>
int main(){
	double a, b;
	printf("Enter two edges of rectangle: ");
	scanf("%lf%lf", &a, &b);
	printf("Perimeter of rectangle with sides %0.1lf and %0.1lf is %0.2lf", a, b, 2*(a+b));
	printf("\nArea of rectangle with sides %0.1lf and %0.1lf is %0.2lf", a, b, a*b);
	return 0;
}
