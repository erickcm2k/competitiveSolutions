#include "stdio.h"
int main()
{
	int n,p,i,j;

	scanf("%d %d",&n,&p);
	
	if((n>=1)&&(n<=10000)&&(p>=1)&&(p<=10000)){
		int alumnos[n+1],buscar[p];

		for(i=1;i<=n;i++){
			scanf("%d",&alumnos[i]);
		}

		for(i=1;i<=p;i++){
			scanf("%d",&buscar[i]);
		}

		for(j=1;j<=p;j++){
			for(i=1;i<=n;i++){
				if(i==buscar[j]){
					printf("%d\n",alumnos[i]);						
				}			
			}
		}
	}

	return 0;
}