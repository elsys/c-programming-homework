#include <stdio.h>

int main()
{
	int n, i=0, a[100], hp=0;
	scanf("%d", &n);
	do
	{
		scanf("%d", &a[i]);
		if(a[i]%2)i++;
	}while(i!=n);
	i--;
	do
	{
		printf("\n%d", a[hp]-a[i]);
		hp++;
		i--;
		if(i==hp)printf("\n%d", a[i]);
	}while(hp>i);
	return 0;
}
