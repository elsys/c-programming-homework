#include <stdio.h>
  int main() {
    int n,i,u;
    float avg=0,sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
      scanf("%d", &u);
      sum=sum+u;
      avg=avg+u;
    }
    avg=avg/n;
    printf("Sum: %.0f\n", sum);
    printf("Avg: %.2f\n", avg);
    return 0;
  }
