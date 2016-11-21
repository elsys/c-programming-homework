#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i;
    int m[1000];
    int x[40];
    int s[20];
    scanf("%d",&n);
    if(n==1){
        i=0;
        do{
            scanf("%d",&m[i]);
            i++;
        }while(m[i-1]%2==0);
        printf("\n%d",m[i-1]);
    }
    else{
        k=0;
        do{
              i=0;
              do{
                     scanf("%d",&m[i]);
                     i++;
              }while(m[i-1]%2==0);
              s[k]=m[i-1];
              k++;
        }while(k!=n);
        if(n%2!=0){
            for(i=0;k-i>2;i++,k--){
                   x[i]=s[i]-s[k-1];
                   printf("\n%d",x[i]);
            }
            x[i]=s[k-i];
            printf("\n%d",x[i]);
        }
        else{
              for(i=0;k-i>0;i++,k--){
                   x[i]=s[i]-s[k-1];
                   printf("\n%d",x[i]);
            }
        }
    }
    return 0;
}
