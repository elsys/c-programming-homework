#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,m,k,i=1,sum=0;
 float r=0.02;
 scanf("%d",&n);
 scanf("%d",&m);
 scanf("%d",&k);
 do{sum=sum+m;
 if(i%k==0)
    m=m-(r*m);
    i=i+1;
 }while(i<=n);
 printf("%d\n",sum);
}
