#include <stdio.h>
int main()
{
int n,m,k,i,sum=0;
float discount=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
int j=k;
for(i=0;i<n;i++)
{
	if(i==k)
	{
		discount=discount+0.02;
		k=k+j;
	}
	sum=sum+m-m*discount;
}
printf("%d",sum);
return 0;
}
