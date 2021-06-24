#include<stdio.h>
int gcm(int m, int n){
	int i, gcm;
	for( i = m ; ;i--){
		if( m%i==0 && n%i==0 ){
			gcm = i;
			break; 
		} 
	}
	return gcm; 
}
int main(){
	int m, n;
	do{
		printf("Enter two positive integers m,n: ");
		scanf("%d%d", &m, &n);
	}while( m<=0 || n<=0 );
	if( gcm(m,n) == 1 ){
		printf("%d and %d are coprime numbers.", m, n);
	} else{
		printf("%d and %d are not coprime numbers.", m, n);
	}
	return 0;
}
