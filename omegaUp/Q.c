#include "stdio.h"
#include "string.h"
int main()
{
	
	char palabra[1000];
	int i=0,j=1;

	scanf("%s",&palabra);

	int mitadpalabra=strlen(palabra)/2;
	int longpalabra=strlen(palabra);

			while((palabra[i]==palabra[longpalabra-j])&&(i<mitadpalabra)){
				i++;
				j++;
			}
	
			if(i==mitadpalabra){
				printf("Si");
			}
			else{
				printf("No");
			}
			
	return 0;
}