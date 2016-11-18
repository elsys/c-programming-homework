#include <stdio.h>

int main()
{
	int n, i=0, a[100];
	scanf("%d", &n);
	while(i!=n)
	{
		scanf("%d", &a[i]);
		if(a[i]%2)i++;
	}
	i=0;
	n--;
	while(n>i)
	{
		printf("%d\n", a[i]-a[n]);
		i++;
		n--;
		if(i==n)printf("%d\n", a[n]);
	}
	return 0;
}
