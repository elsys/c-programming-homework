#include <stdio.h>

int main()
{
int n,s=0,sm=0,m,i;
float k;
scanf("%d",&n);
scanf("%d",&m);
scanf("%f",&k);
k=k*0.01;
sm=m;
for(i=0;i<n;i++)
  {
      if(i!=0)
      if(i%2==0)
        {
        sm=sm-sm*k;
        }
  s=s+(m-(sm*k));
  }
printf("%d",s);
  return 0;
}
