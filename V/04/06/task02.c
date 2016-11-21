#include <stdio.h>

int main()
{
	int n, i = 0;
	scanf("%d", &n);
	int arr[n];
	do
	{
		scanf("%d", &arr[i]);
		if(arr[i] % 2 != 0) i++;
	}while(i < n);
	
	int subtr[n/2], z = 0, count, a;

	do
	{
		count = (n-1) - z;
		subtr[z] = arr[z] - arr[count];
		z++;
	}while(z < n/2);
	
	for(a = 0; a < n/2; a++)
	{
		printf("%d\n", subtr[a]);
	}
	if(n % 2 != 0) printf("%d\n", arr[n/2]);
	
	
	return 0;
}

