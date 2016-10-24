#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s;
    int a[50];
    float ar;
    s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    ar=0;
    ar=(float)s/n;
    printf("\n Sum: ");
    printf("%d",s);
    printf("\n Avg: ");
    printf("%.2f ",ar);
}
