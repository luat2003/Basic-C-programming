#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two integers a, b: ");
	scanf("%d%d", &a, &b);
	printf("%d + %d = %d", a, b, a+b);
	printf("\n%d - %d = %d", a, b, a-b);
	printf("\n%d * %d = %d", a, b, a*b);
	if( b != 0 ){
		printf("\n%d / %d = %0.1f", a, b, a*1.0/b);
	}
	return 0;
}
