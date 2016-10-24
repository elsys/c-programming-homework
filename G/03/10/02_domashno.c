#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,i,a[50];
    float avr;
    do{
            scanf("%d",&n);
    }while(n<1||n>9999);
    i=1;
    s=0;
    do{
        a[i]=n%10;
        n=n/10;
        s=s+a[i];
        i++;
    }while(n>9);
    if(n>=1)s=s+n;
    avr=(float)s/i;
    if(avr<=7)printf("light");
    if(avr>7) printf("heavi");
    return 0;
}
