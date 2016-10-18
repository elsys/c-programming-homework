#include <stdio.h>

int main(){

  float a,b,c,i;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  i = a;

  if (i < b){
    i = b;
  }
  if (i < c){
    i = c;
  }

  printf("%f\n", i);

  return 0;
}
