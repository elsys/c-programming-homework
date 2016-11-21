#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int a[70];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("\n%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("\n%d",a[i]);
    }
    return 0;
}
