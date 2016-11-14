#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int ar[n],num,first,last;
	for(i=1;i<=n;)
	{
		scanf("%d", &num);
		if(num%2!=0)
		{
			ar[i] = num;
			i++;
		}
		
		
	}
/*	if(n%2!=0)
	{
		length = n - 1;
	}
*/	
	for(last=n,first=1;first<=last;last--,first++)
	{
		
//		printf("checker\n");
		if(first==last)
		{
			printf("%d\n", ar[first]);
			break;
		}
		 printf("%d\n", ar[first] - ar[last]);
	}
/*	if(n%2!=0)
	{
//		printf("checker10\n");
		printf("%d",ar[n/2]); 
	}
	
*/	return 0;
	
	
		
	
	
	
	
}

