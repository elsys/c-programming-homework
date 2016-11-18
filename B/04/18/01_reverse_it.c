#include <stdio.h>
int main ()
{
	int n,p;
	int a[100];
	scanf("%d",&n);

	p=0;
	while(p<n)
	{
		scanf("%d",&a[p]);
		p++;
	}
	
	p=n-1;
	while(p>=0)
	{
		printf("%d\n",a[p]);
		p--;
	}

	return 0;
}
