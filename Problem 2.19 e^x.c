#include<stdio.h>
#include<math.h>
unsigned long long factorial(int n){
	if( n == 0 || n==1 ){
		return 1;
	}
	return factorial(n-1)*n;
}
int main(){
	double a, x, n=0, s=0;
	do{
		printf("Enter two real numbers a>0 and x: ");
		scanf("%lf%lf", &a, &x);
	}while(a<=0);
	while( fabs(pow(x,n))/factorial(n) > a){
		s += pow(x,n)/factorial(n);
		n++;
	}
	printf("e^%0.1lf = %0.11lf", x, s);
	return 0;
}
