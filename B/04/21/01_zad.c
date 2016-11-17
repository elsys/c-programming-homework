# include <stdio.h>

int main ()

{

 int arr[100], n,i,k=0;

 scanf("%d",&n);

 	for(i=0;i<n;i++)	
	 {scanf("%d",&arr[i]);}

		 for(k=i-1;k>0;k--)

 		{

		     printf("%d\n",arr[k]);

 		}

	 printf("%d\n",arr[k]);

    return 0;
}
