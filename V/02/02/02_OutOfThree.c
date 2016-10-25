#include <stdio.h>
int main(){
	float a, max=0;
	int i=1;
	do{
		scanf("%f", &a);
		if(max<a) max=a;
		i++;
	}while (i<=3);
	printf("%.1f\n", max);
return 0;
}
