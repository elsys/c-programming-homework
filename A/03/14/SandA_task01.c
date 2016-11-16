#include <stdio.h>
  int main() {
    int n, sum=0, i, m;
    float avg=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
      scanf("%d", &m);
      sum+=m;
      avg+=m;
    }
    avg/=n;
    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);
    return 0;
}
