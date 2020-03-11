#include "stdio.h"
#include "math.h"
int main()
{
	int i,numtriangulos;
	float lado,altura;

	scanf("%d",&numtriangulos);

	for(i=0;i<numtriangulos;i++){
		// Teorema de pitagoras: h^2=L^2-(L/2)^2 para triángulos equilateros
		scanf("%f",&lado);
		altura=sqrt((pow(lado,2)-pow((lado/2),2)));
		printf("%.2f\n",altura);

	}

	return 0;
}