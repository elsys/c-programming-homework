#include <stdio.h>

int main()
{
  int a,i=0,s=0,n;
  float avg;
  do {
    scanf("%d",&a);
  } while(a<1||a>9999);
  do
    {
    n=a%10;
    s=s+n;
    i++;
    a=a/10;
  }while (a>0);
  avg=s/i;
if(avg>7)
  printf("\nheavy");
if(avg<7)
  printf("\nlight" );

  return 0;
}
