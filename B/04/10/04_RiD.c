

#include <stdio.h>
#include <math.h>

int main()
{
  int i, k, povtori=0, m;
  float a[1000],nov[64], sum=0, del;

  for (i = 0; scanf("%f", &a[i]) != EOF; i++){

    povtori++;
    nov[i]=a[i];
    for (m = 0; m < i; m++) {
      if (a[i] == a[m] && i!=m) {
        povtori--;
        i--;
        break;
      }
    }
  }


  for (k = 0; k < i; k++ ) {

    del = fmod(nov[k],povtori);
    sum = sum + del;

  }


  printf("%d\n%.3f", povtori, sum);


  return 0;
}