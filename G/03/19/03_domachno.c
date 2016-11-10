#include<stdio.h>
int main(){
int m,k,p=0,n,s,pr=0;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&k);
for(s=n;m>1;m--){p++;
                 if(p%k==0)pr=pr+2;
                 s=s+n-(n*pr/100);
                }
printf("%d",s);
}                 
