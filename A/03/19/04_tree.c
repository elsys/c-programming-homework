#include <stdio.h>

int main()
{
	int n, k, i, h;
	scanf("%d", &n);
	printf("%d\n", (n-2)*(n-2));
	for(i=1; i<=n; i++)
	{
		for(h=1; h<=n-i; h++)printf(" ");
		printf("*");
		if(i>=2)
		{
			if(i==n)for(k=0; k!=2*i-3; k++)printf("*");
			else if(i>=2)for(k=0; k!=2*i-3; k++)printf("#");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
