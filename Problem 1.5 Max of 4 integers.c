#include<stdio.h>
int main(){
	int a, b, c, d, max;
	printf("Enter 4 integers a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = a;
	if( b > max || c > max || d > max ){
		max = b;
		if( c > max || d > max){
			max = c;
			if( d > max ){
				max = d;
			}
		}
	} 
	printf("Max of %d, %d, %d, %d is %d", a, b, c, d, max);
	return 0;
}
