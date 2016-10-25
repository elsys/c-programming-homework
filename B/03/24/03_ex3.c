#include <stdio.h>
int main() {

  int num, mon, k, tot = 0, disc = 0;
  scanf("%d", & num);
  scanf("%d", & mon);
  scanf("%d", & k);

  for (int i = 0; i < num; i = i + k) {
    if (i >= k) {
      disc = disc + 0.02 * mon;
    }

    tot = k * (mon - disc) + tot;
  }
  printf("%d", tot);

  return 0;
}
