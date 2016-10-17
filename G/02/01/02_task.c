#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float chislo,max=0;
	for(i=0;i<3;i++){
		scanf("%f",&chislo);
		if(chislo>max||i==0){
		max=chislo;
		}
	}
	printf("%.1f\n",max);
	return 0;
}
