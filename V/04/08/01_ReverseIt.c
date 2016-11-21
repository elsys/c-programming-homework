#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;){
        scanf("%d",&m[i]);
        i++;
    }
    for(i=n-1;i>=0;){
        printf("\n%d",m[i]);
        i--;
    }
    return 0;
}
