#include <stdio.h>
#include <stdlib.h>

int main(){
int n,m,k,i,a,b,c;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);

a=m;
b=0;
c=0;
for(i=0;i<n;i++){
if(i!=0 && i%k==0){
c=c+2;
m=a-(a*c/100);}
b=b+m;
}
printf("%d\n",b);
return 0;
}
