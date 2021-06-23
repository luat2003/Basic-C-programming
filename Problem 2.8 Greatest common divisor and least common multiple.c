#include<stdio.h>
#include<math.h> 
int abs(int x); 
int gcm(int a, int b ){
	int i, gcm;
	for(i=abs(a); ;i--){
		if( a%i==0 && b%i==0 ){
			gcm = i;
			break; 
		} 
	}
	return gcm; 
}
int lcm(int a, int b ){
	int i, lcm;
	for(i=abs(a); ;i++){
		if( i%a==0 && i%b==0 ){
			lcm = i;
			break; 
		} 
	}
	return lcm; 
}
int main(){
	int a, b;
	do{
		printf("Enter two non-zero integers a, b: ");
		scanf("%d%d", &a, &b);
	}while( a==0 || b==0 );
	printf("Greatest common divisor of %d and %d is: %d", a, b, gcm(a,b));
	printf("\nLest common multiple of %d and %d is: %d", a, b, lcm(a,b));
	return 0;
}
