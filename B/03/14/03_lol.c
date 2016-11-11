#include "stdio.h"

int main() {

  int n,m,k,q,p,i;
  q=0;
  p=0;
  
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k);
  for (i=0;i<n;i+=k)
  {
  if(i>=k){
  p+=0.02*m;
  }
  q=k*(m-p)+q;
  }
  printf("%d",q);
  return 0;
}
