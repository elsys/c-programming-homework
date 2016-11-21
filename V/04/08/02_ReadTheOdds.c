#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    scanf("%d",&n);
    int m[n];
    while(i<n){
        scanf("%d",&m[i]);
        if(m[i]%2!=0)i++;
    }
    for(i=0;i<n/2;i++){
        printf("\n%d",m[i]-m[(n-1)-i]);
    }
    if(n%2!=0)printf("\n%d",m[n/2]);
    return 0;
}
