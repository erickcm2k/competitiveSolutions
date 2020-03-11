#include "stdio.h"
int main()
{
	int M,T,U,F,D,i,maxdis=0,suma=0;

	scanf("%d %d %d %d %d ",&M,&T,&U,&F,&D);
	char camino[T];

	if((M>=1)&&(M<=10000000)&&(T>=1)&&(T<=100000)&&(U>=1)&&(U<=100)&&(F>=1)&&(F<=100)&&(D>=1)&&(D<=100)){
		for(i=0;i<T;i++){
			scanf("%s",&camino[i]);
		}
		i=0;
		while(suma<M){
			switch(camino[i]){
					case 'U':{
						suma+=(U+D);
						maxdis++;
						break;
					}
					case 'F':{
						suma+=F*2;
						maxdis++;		
						break;
					}
					case 'D':{
						suma+=(D+U);
						maxdis++;
						break;
					}
			}
			i++;
		}
		printf("%d\n",maxdis-1);		
	}
	return 0;
}
