#include<stdio.h>
int main(){

	float edno, dve, tri;

	scanf("%f", &edno);
	scanf("%f", &dve);
	scanf("%f", &tri);

	if(edno>=dve && edno>=tri)
	{
		printf("%f\n", edno);
	}else if(dve>=tri && dve>=edno)
	{
		printf("%f\n", dve);
	}else if(tri>=edno && tri>= dve)
	{
		printf("%f\n", tri);
	}

	return 0;
}
