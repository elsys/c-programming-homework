#include <stdio.h>
int main ()
{
	int hash,broihash,n,r,z,sp;
	scanf("%d",&n);
	r=2;
	hash=1;
	broihash=0;
	while(r<n)

	{
		broihash=broihash+hash;
		hash=hash+2;
		r++;
	}
	printf ("%d\n",broihash);
		
	for(sp=0;sp<n-1;sp++) 
	{
		printf(" ");
	}
	printf("*");
	
	for(sp=0;r<n-1;sp++)
	{
		printf(" ");
	}
	printf("\n");

	for(r=1;r<n-1;r++)
	{
		z=r+1;

		for(sp=n-(z);sp>0;sp--)
		{
			printf(" ");
		}
		printf("*");
	
		for(sp=0;sp<r*2-1;sp++) 
		{
			printf("#");
		}
		printf("*");
		
		for(sp=n-(z);sp>0;sp--)
		{
			printf(" ");
		}
		printf("\n");
	}

	for(sp=0;sp<n*2-1;sp++) 
	{	
		printf("*");
	}
			
	return 0;
		
}
