#include <stdio.h>
int main(){
int i,k,n,m,m1,s=0,p=2;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
m1=m;
for(i=0;i<n;i++){
if(i%k==0&&i>0){
m1=m-(m*p)/100;
p=p+2;
}
s=m1+s;
}
printf("%d\n",s);
return 0;
}

