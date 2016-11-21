#include <stdio.h>

  int main() {
    int n, j = 0, dul, m[n], i, z;
    scanf("%d", & n);
    while (j < n) {
      scanf("%d", & dul);
      if (dul % 2) {
        m[j] = dul;
        j++;
      }
    }
	z = n / 2;
    for (i = 0; i < z; i++) {
      printf("%d\n", m[i] - m[(n - i) - 1]);
    }
    if (n % 2) {
      printf("%d\n", m[n / 2]);
    }
    return 0;
  }
