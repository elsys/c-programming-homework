#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int elements[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &elements[i]);
	}	

	for(int i = n - 1; i >= 0; i--)
	{
		printf("%d\n", elements[i]);
	}
	return 0;
}
