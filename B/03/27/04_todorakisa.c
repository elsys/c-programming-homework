#include<stdio.h>
int main()
{
int n,i,j,lastline,hashtag=0;
scanf("%d",&n);
for(i=1;i<=n-2;i++)
{
	hashtag=hashtag+i*2-1;
}
printf("%d\n",hashtag);
for(i=1;i<=n;i++)
{
	for(j=0;j<n-i;j++)
	{
		printf(" ");
	}
	if(i==n)
	{
		for(lastline=1;lastline<=n+n-1;lastline++)
		{
			printf("*");
		}
	continue;
	}
	printf("*");
	if(i>=2)
	{
		for(hashtag=2;hashtag<i*2-1;hashtag++)
		{
			printf("#");
		}
	printf("*");
	}
	printf("\n");
}	
return 0;
}
