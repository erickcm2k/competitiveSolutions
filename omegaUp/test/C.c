#include "stdio.h"
int main()
{
	int i,year,years;
	scanf("%d",&years);

	for(i=0;i<years;i++){

	scanf("%d",&year);	
		if((year>1600)&&(year<3000)){

			if((year%4==0)&&(year%100!=0)){
				printf("S\n");
			}else if(year%400==0){
				printf("S\n");
			}else{
				printf("N\n");
			}
		}
	}

	return 0;
}
