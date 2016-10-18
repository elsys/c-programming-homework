#include <stdio.h>
float power(float, int);
int main()
{ 
  float a;
  scanf("%f", &a);
  printf("%d\n%d\n",(int) power(a,2) ,(int) power(a,3));
 
  return 0;
}
float power(float a,int n)
{
 float p = 1;
 int i, m;
 if(n>=0) m = n; else m = -n;
 for(i = 1; i <= m; i++) p *= a;
 if(n<0) p=1/p;
 return p;
}
