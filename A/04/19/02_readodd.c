#include <stdio.h>

int main()
{
	int n, i=0, a[100];
	scanf("%d", &n);
	do
	{
		scanf("%d", &a[i]);
		if(a[i]%2)i++;
	}while(i<n);
	i=0;
	n--;
	do
	{
		printf("\n%d", a[i]-a[n]);
		i++;
		n--;
		if(i==n)printf("\n%d", a[n]);
	}while(i<n);
	return 0;
}
