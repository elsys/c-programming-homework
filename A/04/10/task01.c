#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a1[n];
	for(i=0;i<n;i++){
	scanf("%d",&a1[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
		printf("%d\n",a1[i]);
}
