#include <stdio.h>
int main()
{
  int n=0,price=0,i=0,f=0,m=0,k=0,otstupka=0,sum=0;
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k);
  //m=m+2;
  f=n/k;
  while(i<f)
  { 
   price=(m-otstupka)*k;
   sum=sum+price;
   //m=m/k;
   otstupka=otstupka+0.02*m;
   i++;
  }
printf("%d\n",sum);
 return 0;
}
