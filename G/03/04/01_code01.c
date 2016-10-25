#include<stdio.h>

int main()
{
int n,a,i,sum;
float avarage;
scanf("%d",&n);
sum=0;
for(i=0;i<n;i++)
{	
 scanf("%d",&a);
 sum=sum+a;
}
avarage=sum/n;
printf("\n %d" ,sum);
printf("\n %.2f" ,avarage);
return 0;
}



