#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],n,j,m;
    scanf("%d",&n);

    for(j=0;j<n;){
        scanf("%d",&array[j]);
        if(array[j]%2!=0){
        j++;
        }
    }
    int f=1;
    for(j=0;j<n/2;j++,f++){
        m=array[j]-array[n-f];
		printf("%d\n",m);
	}

    if(n%2!=0){
        printf("%d\n",array[n/2]);
    }
}
