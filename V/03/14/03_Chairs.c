#include<stdio.h>
int main(){
int n, m, k, i, sum=0, cdc, d;
float dc=0.02;
scanf("%d %d %d", &n, &m, &k);
cdc=n-k;
d=m*dc;
for(i=0; i<cdc; i++){
if(i%k==0 && i!=0){
dc=dc+0.02;
d=m*dc;
}
sum=sum+(m-d);
}
sum=k*m+sum;
printf("%d",sum);
return 0;
}
