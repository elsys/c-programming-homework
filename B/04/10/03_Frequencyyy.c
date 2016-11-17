

#include <stdio.h>

int main()
{
  int i, j, k, broi_pyti = 0;

  char a[1000];
  fgets(a, 1000, stdin);

  for (i = 0; (a[i] != '\0'); i++) {
    if (a[i] >= 60 && a[i] <= 90) {
      a[i] += 32;
    }
  }

  for (j = 65; j <= 122; j++) {

    for (i = 0; (a[i] != '\0'); i++) {

      if (a[i] == j) {


        for ( k = 0; a[k] != '\0'; k++) {
          if (a[i] == a[k]) {

            broi_pyti++;
            if (i != k) {a[k] = '*';}
          }
        }
        printf("%c - %d\n", a[i], broi_pyti );
        broi_pyti = 0;
      }

    }
    if (j == 90)
    {
      j = 96;
    }

  }



  return 0;
}