#include <stdio.h>
#include <stdlib.h>

int main(){

int n,mass[n],i,l,r,a;
scanf("%d",&n);

for (i=0;i<n;){
scanf("%d",&mass[i]);
if(mass[i]%2){
i++;}
}
for(l=0,r=n-1;l<=r;l++,r--){
a=(l!=r)? mass[l]-mass[r]:
mass[l];
printf("%d\n",a);}
}
