#include<stdio.h>
int main()
{
	int n,i,sum,w;
	scanf("%d", &n);


	int arr[n];
	i=0;
	do{
	do{
	scanf("%d",&arr[i]);
	}while(arr[i]%2==0);
	i++;
	}while(i<n);
		i=0;
		w = n-1;
	do{
	
		sum = arr[i] - arr[w];
		printf("%d\n", sum);
		i++;
		w--;
	  }while(i<n/2);

	if(n % 2 != 0)
	{
	printf("%d",arr[n / 2]);	
	
	return 0;
	}
}
