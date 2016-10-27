#include<stdio.h>
int main(){
int n,k,m,sum=0,x,dc;
float otsipka=0.00;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
dc=m;
for(x=0;x<n;x++){
if(x!=0 && x%k==0){
otsipka=otsipka+0.02;
m=dc-(dc*otsipka);
}
sum=sum+m;
}
printf("%d",sum);
return 0;
}
