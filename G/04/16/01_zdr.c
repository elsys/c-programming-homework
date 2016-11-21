#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int zdr[20],i=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&zdr[i]);
    n--;
    while(n>=0)
    {
        printf("%d\n",zdr[n]);
        n--;
    }
    return 0;
}
