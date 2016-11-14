#include<stdio.h>

int main()
{
	int n,i=0,temp;
	scanf("%d",&n);
	int arr[n];
	
	while(i<n)
	{
		scanf("%d",&temp);
		if(temp%2!=0)
		{
			arr[i]=temp;
			i++;
		}
	}
	
	for(i=0;i<n/2;i++)
	{
		printf("%d\n",arr[i]-arr[(n-i)-1]);
	}

	if(n%2!=0)
	{
		printf("%d\n",arr[n/2]);
	}
}
