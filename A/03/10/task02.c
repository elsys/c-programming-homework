#include<stdio.h>
int main()
{
	int n,i,m;
	int sum=0;
	float avg=0.0;
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	avg=(float)sum/i;
	if(avg<7) printf("light\n");
	else printf("heavy\n");
}
