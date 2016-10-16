#include<stdio.h>
int main(){

	float edno, dve, tri;

	scanf("%f", &edno);
	scanf("%f", &dve);
	scanf("%f", &tri);

	if(edno>=dve && edno>=tri)
	{
		printf("%.1f\n", edno);
	}else if(dve>=tri && dve>=edno)
	{
		printf("%.1f\n", dve);
	}else if(tri>=edno && tri>= dve)
	{
		printf("%.1f\n", tri);
	}

	return 0;
}
