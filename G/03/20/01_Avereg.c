#include <stdio.h>
int main() {
  int a,n;
  float sum=0,avr=0;
  scanf("%d",&n);
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a);
    sum=sum+a;
  }
  printf("Sum: %.0f\n",sum);
  printf("Avg: %.2f",avr=sum/n);
  return 0;
}
