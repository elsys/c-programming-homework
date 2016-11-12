#include<stdio.h>
int main() 
{ 
 int n,p,k,m,i;
p=0; 
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);

for(i=0;i<n;i++)
{

p=m+p-(i/k*(2*m/100)); 

}

printf("\n%d",p);

return 0;
}
