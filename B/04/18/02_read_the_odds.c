#include <stdio.h>
int main()
{
	int n,i,p,k;
	int nechetni[80];
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		do
		{
			scanf("%d",&nechetni[i]);
		} while(nechetni[i]%2==0);



		i++;
	}

	for(i=0;i<n/2;i++)
	{
		p=nechetni[i]-nechetni[n-i-1];
		printf("%d\n",p);
	}

	if(n%2!=0)
	{
		k=nechetni[n/2];
		printf("%d\n",k);
	}

	return 0;
}
