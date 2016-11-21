#include<stdio.h>

int main()
{
	int n, brr=0;
	scanf("%d", &n);
	int arr[n], sum=0;
	while(brr<n)
	{
		scanf("%d", &arr[brr]);
		if(arr[brr]%2!=0)
		brr++;
	}
	if(n%2==0)
	{
		for(brr=0;brr<n/2;brr++)
		{
			sum=arr[brr]-arr[(n-1)-brr];
			printf("%d\n", sum);
		}
	}
	else
	{
		n--;
		for(brr=0;brr<n/2;brr++)
		{
			sum=arr[brr]-arr[n-brr];
			printf("%d\n", sum);
		}
		printf("%d\n", arr[brr]);
	}
	return 0;
}
