#include <stdio.h>
#include <math.h>

int main()
{
  int i, k, p=0, m;
  float a[1000],nov[64], sum=0, del;
  i=0;
  while(scanf("%f", &a[i]) != EOF){
    p++;
    nov[i]=a[i];
    for (m = 0; m < i; m++) {
      if (a[i] == a[m] && i!=m) {
        p--;
        i--;
        break;
      }
    }
    i++;
  }
  k=0;
  while(k<i){
    del = fmod(nov[k],p);
    sum = sum + del;
    k++;
    }
  printf("%d\n%.3f", p, sum);
  return 0;
}
