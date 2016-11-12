
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,m,k,i,sum;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
i=0;
sum=0;
do
{
sum+=m-(i/k*(2*m/100));
i++;
}while(n>i);
printf("\n%d",sum);
return 0;
}
