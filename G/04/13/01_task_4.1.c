#include "stdio.h"

int main()
{
  int n,a[n],i;

  scanf("%d",&n);

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(;n>0;n--)
  printf("%d\n",a[n-1]);

  return 0;
}
