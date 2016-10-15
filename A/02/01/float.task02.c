#include <stdio.h>
int main(){
  float n, x, a, max;
  scanf("%f", &n);
  scanf("%f", &x);
  scanf("%f", &a);
  max = a;
  if(a < n){
    max = n;
  }
  if(max < x){
    max = x;
  }
  printf("%f\n", max);
  return 0;
}
