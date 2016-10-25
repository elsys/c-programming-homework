#include <stdio.h>

int main()
{
  int i,i1=1,n,j,z=0,k=0,a;
  scanf("%d",&n);
for(i=1;i<n-1;i++)
  {
    if(z!=0)
    z=z+2;
    if(z==0)
    z++;
    k=k+z;
  }
  printf("%d\n",k);
  a=n;
  for (j=0;j<n-1;j++)
  printf(" ");
  printf("*\n");
  for(i=1;i<n-1;i++)
  {
    for (j=0;j<a-2;j++)
    printf(" ");
    a--;
    printf("*");
    for(j=1;j<=i1;j++)
    {
    printf("#");
    }
    printf("*\n");
    i1=i1+2;
  }

  for(i=-n;i<n-1;i++)
  printf("*");


  return 0;
}
