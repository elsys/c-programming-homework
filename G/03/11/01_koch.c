#include<stdio.h>
int main()
{
  int n,x,i,s;
  float a;
  scanf("%d",&n);
  i=0;
  s=0;
  while(i<n)
  {scanf("%d",&x);
  s=s+x;
  i++;}
  a=(float)s/n;
  printf("\nSum: %d",s);
  printf("\nAvg: %.2f",a);
  return 0;
}
