#include "stdio.h"
int main()
{
	int N,K,i,j,cont=0;

	scanf("%d %d",&N,&K);
	int NNN[N];
	int KKK[K],buscar[K];

	for(i=0;i<N;i++){
		scanf("%d",&NNN[i]);
	}

	for(i=0;i<K;i++){
		scanf("%d",&KKK[i]);
		buscar[i]=KKK[i];
	}

	for(j=0;j<K;j++){
		for(i=0;i<N;i++){
			if(buscar[j]==NNN[i]){
				printf("%d ",i);
				cont++;
			}
			
			if(i==N-1){
				if(cont<1){
					printf("-1 ");
				}
				cont=0;
			}

		}
	}

	return 0;
}