#include <stdio.h>
int main ()
{
 int arr[100], n,i=0,m=1;

 scanf("%d",&n);

	 while(i<n)
 	{
        	scanf("%d",&arr[i]);
	        if(arr[i]%2!=0)i++;
 	}
      for (i=0;i<n/2;i++,m++)
 	{
     		printf("%d\n",arr[i]-arr[n-m]);
 	}
     if(n%2!=0)printf("%d\n",arr[n/2]);
    return 0;
 }
