#include<stdio.h>
int main(){
	float r;
	const float PI = 3.14;
	printf("Enter the radius of circle : ");
	scanf("%f", &r);
	printf("\nThe circumference of circle with radius %0.1f is: %0.2f", r, 2*r*PI);
	printf("\nThe area of circle with radius %0.1f is: %0.2f", r, r*r*PI);
	return 0;
}
