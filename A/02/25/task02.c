#include <stdio.h>

int main(){

  double a,b,c,i;

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

  printf("%lf", i);

  return 0;
}
