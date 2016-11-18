#include <stdio.h>
int main ()
{
int n,i;
int arr[n];
scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	n--;
		for(;n>=0;n--)
		printf("%d\n",arr[n]);
}
