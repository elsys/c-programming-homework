#include<stdio.h>
int main() 
{ 
 int n,p,i;
 int m,k;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
p=0;
for(i=0;i<n;i++)
{
p=p+m-(i/k*(2*m/100)); 
}
printf("%d\n",p);
return 0;
}
