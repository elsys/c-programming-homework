#include <stdio.h>
#include <stdlib.h>

int main()
{   int k,i=0,l,p,j;
    scanf("%d",&k);
    p=k;
	int a[k+1];
   do{
        scanf("%d",&j);
    if(j%2!=0){
       a[i]=j;
       i++;
    }
    }while(i!=k);
    if(k%2==0)a[k]=a[i-1];
    i=0;
    k=k-1;
    do{

        if(i<k)l=a[i]-a[k];
        printf("\n%d",l);
        i++;
        k--;
        }while(i<k);
        if(p%2!=0){
                if(i==k)l=a[i];
                printf("\n%d",l);
        }
    return 0;
}
