#include <stdio.h>

int main()
{
	int n, i=0, a[100], help;
	scanf("%d", &n);
	do
	{
		scanf("%d", &help);
		if(help%2){a[i]=help;i++;}
	}while(i<n);
	i=0;
	n--;
	do
	{
		printf("%d\n", a[i]-a[n]);
		i++;
		n--;
		if(i==n)printf("%d\n", a[i]);
	}while(i<n);
	return 0;
}
