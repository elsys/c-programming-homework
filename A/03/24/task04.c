#include<stdio.h>
int main()
{
	int n,i=0,j=1,k;
	char c1='*',c2='#';
	scanf("%d",&n);
	printf("%d\n", (n-2)*(n-2));
	while(n>0)
	{
		for(k=0;k<n;k++)printf(" ");
		if(j==1)
		{
			printf("%c\n",c1);
			j++;
			i++;
		}
		else if(n==1)
		{
			for(k=0;k<=j;k++)printf("%c",c1);
		}
		else
		{
			printf("%c",c1);
			for(k=0;k<i;k++)printf("%c",c2);
			printf("%c\n",c1);
			j=j+2;
			i=i+2;
		}
		n--;
	}
	return 0;
}
