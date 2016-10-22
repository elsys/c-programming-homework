#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,m,k,i=0;
float sum=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
do
{
sum=sum+m-(i/k*(2*m/100));
i++;
}while(n>i);
printf("\n%.2f",sum);
return 0;
}
