#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,m,s;
    float x;
    do{
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&k);
    }while(n<=0||m<0);
    s=0;
    x=0;
    do{
        s=s+k*(m-x);
        x=x+2*m/100;
        n=n-k;
    }while(n>0);
    printf("\n%d",s);
    return 0;
}
