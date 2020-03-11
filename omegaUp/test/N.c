#include "stdio.h"
#include "math.h"
int main()
{
		int L[]={16,8,4,2,1},R[]={1,2,4,8,16},dedos[5],suma=0,i,j=4;
		char mano;

		scanf("%c",&mano);

		for(i=0;i<5;i++){
			scanf("%d",&dedos[i]);	
		}

		if(mano=='R'){
			for(i=0;i<5;i++){
				if(dedos[i]==1){
					suma=suma+pow(2,i);
				}
			}
		}

		if(mano=='L'){
			for(i=0;i<5;i++,j--){
				if(dedos[i]==1){
					suma=suma+pow(2,j);
				}
			}
		}

		printf("%d ",suma);

	return 0;
}