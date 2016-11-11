#include <stdio.h>
#include <stdlib.h>
int main(){
int n,m,k,sell=0,i=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
for(;i<n;i++){
sell=sell+m-(i/k*(2*m/100));}
printf("%d\n",sell);
return 0;
} 

