

#include <stdio.h>

int main()
{
  int n, k, i;

  scanf("%d", &n);
  int a[n];

  for (i = 0; i < n;) {
    scanf("%d", &a[i]);
    if ((a[i] % 2) != 0) {

      i++;
    }
  }

  for (i = 0; i < (n / 2); i++) {

    k = a[i] - a[n - 1 - i];

    printf("%d \n", k);
  }
  if ( (n % 2) != 0 ) {
    printf("%d \n", a[n / 2]);
  }



  return 0;
}