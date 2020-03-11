#include "stdio.h"
int main()
{
	int Frodo,Cortazar,Aristoteles;

	scanf("%d",&Frodo);
	if(Frodo>0){
		Cortazar=Frodo*3;
		Aristoteles=Cortazar+2;
		printf("%d",Aristoteles);
	}
	return 0;		
}