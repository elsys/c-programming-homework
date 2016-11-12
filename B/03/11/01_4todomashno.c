#include <stdio.h>
int main()
{
  
 int n=0,i,sum=0,m=0;
 float avr=0;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
   scanf("%d",&m);
   sum=sum+m;	
 }
 avr=(float)sum/n;
 printf("Sum: %d\nAvg: %.2f",sum,avr);



 return 0;
}
