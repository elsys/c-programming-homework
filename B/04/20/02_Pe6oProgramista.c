#include<stdio.h>
int main()
{
	int i=0,n,m,vhod;
	scanf("%d",&n);
	m=n;
	int nechetni[n];
	while(i<n)
	{
		scanf("%d",&vhod);
		if(vhod%2!=0)
		{
			nechetni[i]=vhod;
			i++;
		}
		
	}
	if(n%2!=0) m--;
	for(i=0;i<m/2;i++)
	{
		printf("%d \n",nechetni[i]-nechetni[n-1-i]);
	}
	if(n%2!=0) printf("%d",nechetni[n/2]);
}
