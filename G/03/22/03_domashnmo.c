#include<stdio.h>
int main(){
int m,k,p,n,s,pr;
p=0;
pr=0;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&k);
for(s=n;m>1;m--){p++;
                 if(p%k==0)pr=pr+2;
                 s=s+n-(n*pr/100);
                }
printf("%d",s);
}      
