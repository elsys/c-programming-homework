#include<stdio.h>

int main()
{
	int n, m, k, discount=0, money, i=0, sum=0;
	scanf("%d\n%d\n%d",&n,&m,&k);
	money=m;
	while(i<n)
	{
		if(i!=0 && i%k==0 )
		{
			discount=discount+2;
			m=money-(money*discount/100);
		}
		sum=sum+m;
		i++;
	}
	printf("\n%d",sum);
}
