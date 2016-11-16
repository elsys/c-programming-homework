#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,k,i,sum,j;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    i=k;
    j=m*0.02;
    sum=k*m;
    do{
        m=m-j;
        sum=sum+k*m;
        i=i+k;
    }while(i<n);
    printf("%d",sum);
}
