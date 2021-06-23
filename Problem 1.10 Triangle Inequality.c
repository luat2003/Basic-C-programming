#include<stdio.h>
int main(){
	float a, b, c;
	do{
		printf("Enter three positive reals number a, b, c: ");
		scanf("%f%f%f", &a, &b, &c);
	}while( a<=0 || b<=0 || c<=0 );
	if( a+b-c>0 && b+c-a>0 && c+a-b>0 ){
		printf("%0.1f, %0.1f, %0.1f are the lengths of the three sides of a triangle.", a, b, c);
	}else{
		printf("%0.1f, %0.1f, %0.1f are not the lengths of the three sides of a triangle.", a, b, c);
	}
	return 0;
}
