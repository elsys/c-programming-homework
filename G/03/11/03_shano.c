#include<stdio.h>
int main()
{
  int n,m,k,s,p,t;
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k);
  p=1;
  t=0;
  s=n;
  while(n>1)
  {if(p%k==0)
  t=t+2;
  s=s+n-(n*t/100);
  p++;
  m--;}
  printf("%d",s);
}
