#include <stdio.h>
int main() {
  int n, m, k, h, j;
  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%d", &k);
  h = k * m;
  n = n - k;
  j = m * k;
  while((n - k) >= 0){
    j = j - ((j * 2) / 100.0);
    n = n - k;
    h = h + j;
  }
  if(n != 0){
    j = n * m;
    h = h + j;
  }
  printf("%d\n", h);
  return 0;
}
