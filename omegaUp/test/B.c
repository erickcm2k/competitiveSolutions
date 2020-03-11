#include "stdio.h"
int main()
{
	int longitud,i,numbuscar,cont=0;

	scanf("%d",&longitud);
	int numeros[longitud];

	for(i=0;i<longitud;i++){
		scanf("%d",&numeros[i]);
	}

	scanf("%d",&numbuscar);

	for(i=0;i<longitud;i++){
		if(numbuscar==numeros[i]){
			printf("Si");
			cont++;
		}
	}
		if(cont<1){
			printf("No");	
		}	

	return 0;
}