#include <stdio.h>
#include <string.h>
int main()
{
	char cadena[50];
	int i,numas=0,otros=0;
	
	
		scanf("%s",&cadena);
		for(i=0;i<strlen(cadena);i++){
			if(cadena[i]=='a'){
				numas++;
			}
			else{
				otros++;
			}
		}		
 
		if(numas>otros){
			printf("%d",strlen(cadena));
		}else{
			while(otros>=numas){
				otros--;
			}
			printf("%d",numas+otros);
		}
 
	return 0;
}
