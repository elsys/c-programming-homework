#include <stdio.h>
  int main() {
    float eq, num[64], all;
    int i, j, perm, n = 0;
    for (i = 0; scanf("%f", & eq) != EOF; i++) {
      	perm = 0;
	for (j = 0; j < i; j++) {
        if (eq == num[j]) {
          perm++;
          break;
        }
      }
      if (perm == 0) {
        num[n] = eq;
        n++;
      }
    }
    printf("%d\n", n);
    all = 0;
    i=0;
    while (i < n) {
     	while (num[i] >= 0){
        num[i] = num[i] - n;
      }
      all = all + (num[i] + n);
      i++;
      }
    printf("%.3f", all);

    return 0;
  }
