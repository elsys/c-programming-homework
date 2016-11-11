#include <stdio.h>
int main() {
  int n,a=0,sum;
  scanf("%d",&n);
  for (sum=0;n!=0;n=n/10,a++)sum=sum+n%10;
  sum=sum/a;
  if (sum>7)printf("heavy");
  else printf("light");
  return 0;
}
