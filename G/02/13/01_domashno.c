#include<stdio.h>

int main()
{
	int a,n;
	
	printf("\nInput n:");
	scanf("%d",&n);
	a=n;
	a=a*n;
	printf("\n%d\n",a);
	a=0;
	a=n;
	a=a*n*n;
	printf("%d\n",a);
	
	return 0;
}
