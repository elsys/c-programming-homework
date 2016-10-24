#include<stdio.h>
int main()
{
  float m,n,p;
  scanf("%f",&m);
  scanf("%f",&n);
  scanf("%f",&p);
  if(m>n && m>p)printf("%.1f\n",m);
  else if(p>m)printf("%.1f\n",p);
  else printf("%.1f\n",n);
  return 0;


}


