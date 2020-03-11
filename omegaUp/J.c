#include <stdio.h>
int factorial(int n);
int main(){
	int n,fac;
	scanf("%d",&n);
	fac=factorial(n);
	printf("%d",fac);
	return 0;
}
int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return(n*factorial(n-1));
	}
}