#include<stdio.h>
#include<stdlib.h>
int main (){
int n,sum,i;
i=0;
scanf("%d",&n);
 for (sum=0;n!=0;n=n/10,i++)
  sum=sum+n%10;
sum=sum/i;

  if (sum>7)printf("heavy\n");

  else printf("light\n");


return 0;
}
