#include <stdio.h>
int main() {

  int i, n, money, k, total, discount = 0;
  total = 0;
  scanf("%d", & n);
  scanf("%d", & money);
  scanf("%d", & k);


  for (i = 0; i < n; i = i + k) {
    if (i >= k) {
      discount = discount + 0.02 * money;
    }

    total = k * (money - discount) + total;
  }
  printf("%d", total);

  return 0;
}
