#include <stdio.h>

int main()
{

  int n,a,i,s=0;
  float avg;
  scanf("%d", &n);
  for (i=0;i<n;i++)
  {
  scanf("%d", &a);
  s=s+a;
  }
  printf("Sum: %d\n",s);
  avg=(float)s/n;
  printf("Avg: %.2f\n", avg);

  return 0;
}
