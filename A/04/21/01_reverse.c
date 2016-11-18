#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],k,i=0;
    scanf("%d",&k);
    do{
        scanf("%d",&a[i]);
        i++;
    }while(i<k);
    i=i-1;
    do{
        printf("\n%d",a[i]);
        i--;
    }while(i!=-1);
    return 0;
}
