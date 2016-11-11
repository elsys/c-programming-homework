#include "stdio.h"

int main() {

  int n,s,q,i;
  float m;
  q=0;
  m=0;
  scanf("%d",&n);
  for(i= 0;i<n;++i)
  {
  scanf("%d",&s);
  q=q+s;
  m=(float)q/(i+1);
  }
  printf("Sum: %d\nAvg: %.2f",q,m);
  
  return 0;
  }
