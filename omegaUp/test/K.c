#include <stdio.h>
int main()
{
	int MAX=0,terminos, fib=1,nm1=2,nm2=1;

	scanf("%d",&MAX);
	if((MAX>0)&&(MAX<=1000000)){

		while(fib<MAX){
			printf("%d ",fib);
			nm2=nm1+fib;
			fib=nm1;
			nm1=nm2;		
		}

	}

	return 0;
}