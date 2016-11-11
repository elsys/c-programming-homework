#include <stdio.h>
int main() {
  int n,count=0,a,sum=0;
  float avg;
    scanf("%d", &n);
  while(count<n){
    scanf("%d", &a);
    sum = sum + a;
    count = count+1;
  }
  avg=(float)sum/n;
  printf("Sum: %d\n", sum);
  printf("Avg: %.2f\n", avg);
  return 0;
}
