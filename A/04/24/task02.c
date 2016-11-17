#include<stdio.h>

int main()
{
	int a[50];
	int n,b,i=0,j=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&b);
		if(b%2!=0)
		{
			a[i]=b;
			i++;
		}
	}
	i--;
	while(i>j)
	{
		b=a[j]-a[i];
		printf("\n%d",b);
		j++;
		i--;
		if(i==j)printf("\n%d",a[i]);
	}
	return 0;
}
