#include<stdio.h>
int main()
{
int n,m,k,i,sum;
i=0;
sum=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&k);
do{
sum=sum+m-(i/k*(2*m/100));
i++;
}while(n>i);
printf("\n%d",sum);
return 0;
}
