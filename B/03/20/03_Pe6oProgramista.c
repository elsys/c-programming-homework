#include<stdio.h>
int main()
{
	int n,m,k,k1,i,cost=0;
	float t=0;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	k1=k;
	for(i=0;i<n;i++)
	{
		if(i==k)
		{
			t+=0.02;
			k+=k1;
		}
		cost+=m-m*t;
	}
	printf("%d \n",cost);
}
