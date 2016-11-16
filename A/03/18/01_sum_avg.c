#include <stdio.h>
int main() {
  int n, i, a, sum = 0;
  float avg;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
      scanf("%d", &a);
      sum += a;
      avg += a;
    }
    avg /= n;
    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);
    return 0;
}
