#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int numbers[n];
	for(i=0;i<n;i++) scanf("%d",&numbers[i]);
	for(i=n-1;i>=0;i--) printf("%d \n",numbers[i]);
}
