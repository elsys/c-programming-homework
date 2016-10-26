#include<stdio.h>
int main()
{
	int i,k,t,a,space;
	scanf("%d",&a);
	printf("%d \n",(a-2)*(a-2));
	space=a-1;
	for(i=0;i<a-1;i++)
	{
		for(k=0;k<space;k++)
		{
			printf(" ");
		}
		printf("*");
		for(t=1;t<i*2;t++)
		{
			printf("#");
		}
		if(i>0) printf("*");
		space--;
		printf("\n");
	}
	for(int z=0;z<a*2-1;z++) printf("*");
	printf("\n");
}
