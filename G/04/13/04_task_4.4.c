#include "stdio.h"

int main()

{
  float a[64],s;
  int i,j,d,k=1;

    scanf("%f", &a[0]);

  for(i=1 ; scanf("%f", &a[i])!=EOF ; i++)
  {

    d=i;
    for(j=0;j<i;j++)
    {
        if(a[i]==a[j])
        {
          i--;
          break;
        }
    }
    if(d==i)k++;

  }

printf("%d",k);
for(j=0;j<i;j++)
{
  while(a[j]>=k)
  {
  a[j]=a[j]-k;
  }
  s=s+a[j];
}
printf("\n%.3f",s);

  return 0;
}
