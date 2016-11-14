#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int ar[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]); 
	}
	for(i=n;i>0;i--)
	{
		printf("%d\n", ar[i]);
	}
	
	return 0;
}
