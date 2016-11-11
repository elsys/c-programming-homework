#include <stdio.h>
  int main() {
    int n, s=0, i, c;
    float a=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
      scanf("%d", &c);
      s=s+c;
      a=a+c;
    }
    a=a/n;
    printf("Sum: %d\n", s);
    printf("Avg: %.2f\n", a);
    return 0;
  }
