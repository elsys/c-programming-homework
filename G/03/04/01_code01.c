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
avarage=(float)sum/n;
printf("\n Sum: %d" ,sum);
printf("\n Avg: %.2f" ,avarage);
return 0;
}



