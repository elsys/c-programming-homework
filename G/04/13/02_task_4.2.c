#include "stdio.h"

int main ()
{
  int n,a[n],i=0,j=0,k[n],z=0;

  scanf("%d", &n);

  do
  {

      scanf("%d", &j);
      if(j%2!=0)
      {
        a[i]=j;
        i++;
      }
    if(i==n)break;
  }while(1);

j=n;
for(i=0;i<j;i++)
  {
    j--;
    k[z]=a[j]-a[i];
    z++;
  }

for(i=0;i<n/2;i++)
printf("%d\n",k[i]);

if(n%2!=0)
printf("%d\n", a[n/2]);

  return 0;
}
