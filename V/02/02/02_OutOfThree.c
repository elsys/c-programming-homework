#include <stdio.h>
int main(){
	float a, max=0;
	int i=1;
	do{
		printf("\n Enter a number:");
		scanf("%f", &a);
		if(max<a) max=a;
		i++;
	}while (i<=3);
	printf("\n %.1f", max);
return 0;
}
