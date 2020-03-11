#include "stdio.h"
#include "string.h"
int main()
{
	int n,probar,i,j=0;
	//aft156YTU512
	scanf("%d",&n);

	if((n>=1)&&(n<=100)){
		char password[n];

		scanf("%s",&password);
		

		if(strlen(password)>=12){
			probar++;
		}

		if(probar==1){
			for(i=0;i<n;i++){
				switch(password[i]){
					case 'a': probar++; break;
					case 'e': probar++; break;
					case 'i': probar++; break;
					case 'o': probar++; break;
					case 'u': probar++; break;
					case 'A': probar++; break;
					case 'E': probar++; break;
					case 'I': probar++; break;
					case 'O': probar++; break;
					case 'U': probar++; break;				
				}
				if(probar>1){
					break;
				}
			}			
		}

		if(probar==2){
			for(i=0;i<n;i++){
				switch(password[i]){
					case '1': probar++; break;	
					case '2': probar++; break;
					case '3': probar++; break;
					case '4': probar++; break;
					case '5': probar++; break;
					case '6': probar++; break;	
					case '7': probar++; break;
					case '8': probar++; break;
					case '9': probar++; break;	
				}
				if(probar>2){
					break;
				}
			}			
		}
		
		if(probar==3){
			for(i=0;i<n-1;i++){
				if(password[i]==password[i+1]){
					j++;
					if(j>0){
						break;
					}
				}
			}
			if(j==0){
				probar++;
			}
		}


		if(probar==4){
			printf("SEGURO");
		}
		else{
			printf("INSEGURO");
		}
	}
	return 0;
}