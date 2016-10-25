#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,m,k,i=1,sum=0;
 float r=0.02;
 scanf("%d",&n);
 scanf("%d",&m);
 scanf("%d",&k);
 for(r*m;i<=n;i++){
 	sum=sum+m;
 if(i%k==0){
    m=m-r;
   }
 }
 printf("%d\n",sum);
}

