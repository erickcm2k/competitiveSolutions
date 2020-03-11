#include "stdio.h"
int main()
{
	int M,N,MCD,divisor=1;

	scanf("%d",&M);
	scanf("%d",&N);

	while((divisor<=M)&&(divisor<=N)){
		if((M%divisor==0)&&(N%divisor==0)){
			MCD=divisor;
		}
		divisor++;
	}

	printf("%d\n",MCD);

	return 0;
}