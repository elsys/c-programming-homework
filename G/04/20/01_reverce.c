#include <stdio.h>
int main()
{
  int mas[100];
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&mas[i]);
  for(i--;i>=0;i--)printf("\n%d",mas[i]);
  return 0;
}
