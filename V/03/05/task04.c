#include <stdio.h>

int main()
{
	int n,i,j,h;

	scanf("%d",&n);
	printf("%d\n",(n-2)*(n-2));
	
	for(i=1;i<=n;i++)
	{
		for(h=1;h<=n-i;h++)
		{
			printf(" ");
		}
		printf("*");
		if(i>1)
		{
				if(i==n)for(j=0;j<2*i-3;j++)
				{
					printf("*");
				}
				else if(i>=2)for(j=0;j<2*i-3;j++)
				{
					printf("#");
				}
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
		
