#include <stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	int res=0;
	int arr[n];
	while(i<n)
	{
	scanf("%d",&arr[i]);
	if(arr[i]%2) i++;
	}
	i=n-1;
	while(j<i)
	{
		res=arr[j]-arr[i];
		printf("%d\n",res);
		j++;
		i--;
	}
	if(i==j) printf("%d\n",arr[j]);
}
