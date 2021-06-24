#include<stdio.h>
#include<math.h>
/*double sum(unsigned long long n){
	if( n == 0 ){
		return 4.0;
	} else{
		return sum(n-1)+4*pow(-1,n)*(1.0/(2*n+1));
	}
}
double pi( double a ){
	unsigned long long i = 0, n;
	do{
		n = i;
		if( 1.0/(2*i+1) >= a ){
			i++;
		}
	}while( n != i );
	return sum(n);
}*/
int main(){
	double a, i=0, n, s=0;
	printf("Enter a real number a: ");
	scanf("%lf", &a);
	while((1/(2*i+1))>=a){
		n=i;
		s += 4*pow(-1,n)*(1.0/(2*n+1));
		i++;
	}
	printf("Pi = %0.8lf", s);
	return 0;
}
