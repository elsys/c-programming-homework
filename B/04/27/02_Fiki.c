#include<stdio.h>
int main()
{
int n,i=0;
scanf("%d",&n);
int masivche[n];
for(i=0;i<n;i++)
{
	scanf("%d",&masivche[i]);
	if(masivche[i]%2==0)i--;
}
for(i=0;i<n/2;i++)
{
	printf("%d\n",masivche[i]-masivche[(n-1)-i]);
}
if(n%2==1)
{
	printf("%d",masivche[(n / 2) + 1]);
}	
return 0;
}
