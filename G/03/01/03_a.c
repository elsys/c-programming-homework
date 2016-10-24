#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,suma,i,a;
    suma=0;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        a=i/k*(0.02*m);
        suma=suma+m-a;

    }
    printf("%d\n",suma);
    return 0;
}
