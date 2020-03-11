#include "stdio.h"
int main()
{
	int m,n;

	scanf("%d",&m);
	scanf("%d",&n);

	if((m>=-1000)&&(m<=1000)&&(n>=-1000)&&(n<=1000)){
		if(m+n<0){
			printf("%d",(m+n)*-1);	
		}
		else{
			printf("%d",m+n);
		}
	}
	return 0;
}