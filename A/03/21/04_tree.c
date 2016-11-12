#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,sp,i,cur,diez;
   scanf("%d",&n);
   printf("%d\n", (n-2)*(n-2));
   for(cur=1;cur<=n;cur++){
    for(i=1, sp=n-cur;i<=sp;i++){
        printf(" ");
    }
    printf("*");
    if(cur>=2){
            if(cur==n)for(i=0, diez=2*cur-3;i!=diez;i++)printf("*");
            else if(cur>=2)for(i=0, diez=2*cur-3;i!=diez;i++)printf("#");
            printf("*");
        }
    printf("\n");
    }
}
