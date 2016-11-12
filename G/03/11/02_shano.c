#include<stdio.h>
int main()
{
  int a,b,s,i;
  float r;
  scanf("%d",&a);
  s=0;
  i=0;
  b=0;
  while(a!=0)
  {b=a%10;
  a=a/10;
  s=s+b;
  i++;}
  r=(float)s/i;
  if(r>7)
  printf("heavy");
  else 
  printf("light");
}
