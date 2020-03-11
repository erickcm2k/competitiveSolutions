#include "stdio.h"
#include "string.h"
int main()
{
	char palabra[100];
	int i;

	scanf("%s",&palabra);

	for(i=0;i<strlen(palabra);i++){
		printf("%c\n",palabra[i]);
	}


	return 0;
}