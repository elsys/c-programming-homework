#include <stdio.h>
int main()
{
    
    int n,i,q;
	i=0;
    scanf("%d", &n);
	int arr[n];
	
    do{

        scanf("%d", &arr[i]);
        i++;
    }while(i<n);
	q=n-1;
    do{
       
        printf("%d\n", arr[q]);
        q--;
    }while(q>=0);

    return 0;
}

