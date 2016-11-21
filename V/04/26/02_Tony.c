#include<stdio.h>
 int main()
{
 	int n,a;
 	scanf("%d",&n);
 	int arr[n];
 	for(a=0;a<n;a++)
	{
 		scanf("%d",&arr[a]);
		if(arr[a]%2==0)
		a--; 
	}

	for(a=0;a<n/2;a++) 
	{
    		printf("%d\n",arr[a]-arr[n-1-a]);
        }

        if(n%2==1)
	{
      		 printf("%d\n",arr[n/2]);
        }

	return 0;
}
